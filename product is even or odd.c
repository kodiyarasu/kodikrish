#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the a and b value:");
scanf("%d%d",&a,&b);
c=a*b;
if(c%2==0)
{
printf("Even");
}
else
{
printf("Odd");
}
}
