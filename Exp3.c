//NAME : ANKIT NAIN             ROLL NO :2K21/A16/07
//Problem 3: Problem to find Simple interest.
//code->
#include <stdio.h>
int main() 
{
    int p,r,t;
    printf(" Principle Amount:\n");
    scanf("%d",&p);
    printf(" Rate of Interest:\n");
    scanf("%d",&r);
    printf(" Time in years:\n");
    scanf("%d",&t);
    
    printf(" Simple Interest : %d", (p*r*t)/100);
    
    return 0;
}