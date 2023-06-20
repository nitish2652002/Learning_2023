#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num = num | (1 << 0);  // Set 1st bit
            break;
        case 2:
            num = num & ~(1 << 31);  // Clear 31st bit
            break;
        case 3:
            num = num ^ (1 << 15);  // Toggle 16th bit
            break;
        default:
            printf("Error: Invalid operation type!\n");
    }

    return num;
}

int main() {
    int num, oper_type;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    int result = bit_operations(num, oper_type);

    printf("Result: %d\n", result);

    return 0;
}
