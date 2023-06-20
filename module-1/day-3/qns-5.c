#include <stdio.h>

void findSmallestLargestDigits(int n, ...) {
    va_list args;
    va_start(args, n);

    int smallestDigit = 9;
    int largestDigit = 0;

    for (int i = 0; i < n; i++) {
        int num = va_arg(args, int);
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }
            if (digit > largestDigit) {
                largestDigit = digit;
            }
            temp /= 10;
        }
    }

    va_end(args);

    if (smallestDigit == 9 || largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallestDigit);
        printf("Largest Digit: %d\n", largestDigit);
    }
}

int main() {
    findSmallestLargestDigits(3, 8, 156, 123450);
    return 0;
}
