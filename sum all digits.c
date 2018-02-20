#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,sum=0;
printf("Enter the number:");
scanf("%d",&n);
a=n;
while(a!=0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
printf("%d",sum);
}
