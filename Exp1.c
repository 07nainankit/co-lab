//NAME : ANKIT NAIN             //ROLL NO :2K21/A16/07
//Problem 1: Program to find sum and average of two numbers.
//code->
#include <stdio.h>
int main() 
{
    int num1,num2,sum;
    float avg;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    avg = (float)(num1+num2)/2;
    printf("Sum of %d and %d is = %d \n ",num1,num2,sum);
    printf("Average of %d and %d is = %f",num1,num2,avg);
    return 0;
}