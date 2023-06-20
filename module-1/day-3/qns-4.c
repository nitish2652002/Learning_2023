#include <stdio.h>

int findLargestNumber(int num) {
    int largest = 0;

    // Convert the number to a string for digit manipulation
    char str[5];
    sprintf(str, "%d", num);

    for (int i = 0; i < 4; i++) {
        // Remove the i-th digit from the number
        int current = 0;
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                current = current * 10 + (str[j] - '0');
            }
        }

        // Update the largest number if necessary
        if (current > largest) {
            largest = current;
        }
    }

    return largest;
}

int main() {
    int num;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int largest = findLargestNumber(num);

    printf("Largest number after deleting a digit: %d\n", largest);

    return 0;
}
