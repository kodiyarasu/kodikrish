#include<stdio.h>
#include<conio.h>
void main()
{
int a,count,i;
count=0;
printf("Enter the value:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
count++;
}
}
if(count==2)
{
printf("Prime number");
}
else
{
printf("\n Not a prime number");
}
}
