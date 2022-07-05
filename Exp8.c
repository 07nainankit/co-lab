//Name- Ankit Nain  // Roll no - 2k21/A16/07
#include<stdio.h>
int main(){   
float b,h,area;
char n;
printf("Enter which area : ");
scanf("%c",&n);
switch(n){
    case 't':
    printf("Enter the base: ");
    scanf("%f",&b);
    printf("Enter the height: ");
    scanf("%f",&h);
    area = (b*h)/2;
    printf(" Area of triangle is = %f", area);
    break;

    case 's':
    printf("Enter the side :");
    scanf("%f",&b);
    area = b*b;
    printf(" Area of square is = %f", area);
    break;

    case 'c':
     printf("Enter the radius:");
    scanf("%f",&b);
    area = 3.14*b*b;
    printf(" Area of circle is = %f", area);
}return 0;}