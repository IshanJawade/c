#include <stdio.h>

int main(){

    float num1, num2, num3;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);

    float average = (num1 + num2 + num3) / 3;

    printf("Average is %f\n", average);

    return 0;
}