
#include<stdio.h>
#include<conio.h>
void main()
{
int i,prime,a,b,j;
printf(" Enter the limit a: ");
scanf("%d",&a);
printf("\n Enter the limit b: ");
scanf("%d",&b);
printf("\n Prime number is: ");
for(i=a+1;i<b;i++)
{
prime = 1;
}
for(j=2; j<i/2; j++)
{
if(i%j==0)
{
prime=0;
break;
}
}
if(prime)
{
printf("\n %d",i);
}
}

