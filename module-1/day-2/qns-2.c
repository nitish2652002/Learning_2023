#include <stdio.h>

void swap(void* ptr1, void* ptr2, size_t size) {
    char* charPtr1 = (char*)ptr1;
    char* charPtr2 = (char*)ptr2;

    while (size--) {
        char temp = *charPtr1;
        *charPtr1++ = *charPtr2;
        *charPtr2++ = temp;
    }
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    float f1 = 3.14;
    float f2 = 2.71;

    printf("Before swapping: f1 = %f, f2 = %f\n", f1, f2);

    swap(&f1, &f2, sizeof(float));

    printf("After swapping: f1 = %f, f2 = %f\n", f1, f2);

    char c1 = 'A';
    char c2 = 'B';

    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);

    swap(&c1, &c2, sizeof(char));

    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
