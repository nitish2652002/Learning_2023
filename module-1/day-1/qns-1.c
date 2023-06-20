#include <stdio.h>


int findBiggestIfElse(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}


int findBiggestTernary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int biggestIfElse = findBiggestIfElse(num1, num2);
    int biggestTernary = findBiggestTernary(num1, num2);
    
    printf("Using if-else: The biggest number is %d\n", biggestIfElse);
    printf("Using ternary operator: The biggest number is %d\n", biggestTernary);
    
    return 0;
}
