//NAME : ANKIT NAIN             ROLL NO :2K21/A16/07
//Problem 2: Program to find greatest of 10 numbers.
//code->
#include <stdio.h>
int main() 
{
    int numbers[10];
    int greatest,i;
    printf("Enter ten number:\n");
    for(i = 0;i < 10; i++)
    {
        scanf("%d", &numbers[i]);
    }
    greatest = numbers[0];
    for(i = 0; i < 10 ; i++)
    {
        if(numbers[i] > greatest)
        {
            greatest = numbers[i];
        }
    }
    printf("\nGreatest of ten numbers is %d", greatest);
    return 0;
}