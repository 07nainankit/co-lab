//NAME : ANKIT NAIN             ROLL NO :2K21/A16/07
//Problem 4: Program to print the following patterns.
//pattern no 1.
#include <stdio.h>
int main() 
{
    int i , j ;
    for( i=0 ; i<5 ; i++)
    {
        for(j=4 ; j>i ; j--)
        {
                printf(" ");
        }
        for( j=0 ; j<=i ; j++)
        {
            printf("* ");
        }
    printf("\n");
    }
    return 0;
}