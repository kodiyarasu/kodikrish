#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("Enter two numbers a and b:");
scanf("%d%d",&a,&b);
printf("\n before swapping a=%d.b=%d",a,b);
a=a^b;
b=a^b;
a=b^b;
printf("\n After swapping a=%d,b=%d",a,b);
}
