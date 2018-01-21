#include<stdio.h>
void main()
{
int a;
printf("Enter the number");
scanf("%d",&a);
if(a<0)
{
printf("\n The number is negative");
}
else
if(a==0)
{
printf("\n The number is zero");
}
else
{
printf("\n The number is positive");
}
}
