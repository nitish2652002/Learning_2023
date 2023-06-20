#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks;
    float totalMarks, percentage;

    // Read input from the user
    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);

    // Calculate total marks and percentage
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300) * 100;

    // Print the summary
    printf("\n");
    printf("************** Student Summary **************\n");
    printf("Roll No: %d\n", rollNo);
   
