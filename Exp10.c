//Name- Ankit Nain  // Roll no - 2k21/A16/07

// to display n terms of odd natural no and their sum

#include<stdio.h>
int main()
{   
int n,ans=0;
scanf("%d",&n);

for(int i=1 ; i<=n ; i+=2)
{
    printf("%d ",i);
}
for(int i=1 ; i<=n ; i+=2)
{
    ans = ans + i;
}
printf("\n the sum of n odd terms is = %d",ans);

return 0;
}