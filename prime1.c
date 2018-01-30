#include<stdio.h>
#include<conio.h>
void main()
{
int a,count=0,i;
printf("Enter a number:");
scanf("%d",a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
count++;
}
}
if(count==2)
{
printf("\n prime number");
}
else
{
printf("\n Not a prime number");
}
}
