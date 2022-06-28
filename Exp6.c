//NAME : ANKIT NAIN             ROLL NO :2K21/A16/07
//Problem 6: Program to find sum of a 5 digit number.
//code->
#include <stdio.h>
#include <math.h>
int main() 
{
    int num,digit,sum=0;
    printf("Enter the digits:");
    scanf("%d", &num);
    while (num>0)
    {
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }

    printf("The sum of digits is:%d", sum);
    return 0;
}