//Sum and Average of 1D array
#include <stdio.h>

int main()
{
    int i,sum,avg;
    int arr[] = {12,84,20,36,64,56,72,10,45,90};
    for(i=0;i<10;i++){
        sum = sum + arr[i];
        printf("The Sum of %d\n elements is %d\n",i,sum);
    }
    avg = sum / 10;
    printf("Average of Elements in 1D array is : %d",avg);

    return 0;
}