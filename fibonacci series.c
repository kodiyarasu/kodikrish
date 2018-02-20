#include<stdio.h>
#include<conio.h>
void main()
{
int a=-1,b=1,c,i,n;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
c=a+b;
printf("%d",c);
a=b;
b=c;
}
}
