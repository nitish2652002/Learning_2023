#include <stdio.h>

void printExponent(double num) {
    unsigned long long* p = (unsigned long long*)&num;
    unsigned long long bits = *p;

    // Extract the exponent bits
    unsigned long long exponent = (bits >> 52) & 0x7FF;

    // Print the exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponent);

    // Print the exponent in binary format
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);

    return 0;
}
