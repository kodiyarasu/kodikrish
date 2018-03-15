#include<stdio.h>
#include<conio.h>
void main()
{
int n,a;
printf("Enter the value:");
scanf("%d",&n);
while(n>0)
{
a=n%10;
if(a%2!=0)
{
printf("%d ",a);	
}
n=n/10;
}
}
