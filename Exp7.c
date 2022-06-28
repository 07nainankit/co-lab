//NAME : ANKIT NAIN             ROLL NO :2K21/A16/07
//Problem 6: Program to reverse a 5 digit number.
//code->
#include <stdio.h>
int main()
{
    int num, digits, reverse = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    while ( num!=0)
    {
        digits = num%10;
        reverse = reverse * 10 + digits;
        num = num /10;
    }
    printf("Reversed is = %d", reverse);
    return 0;
}