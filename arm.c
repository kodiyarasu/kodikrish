#include<stdio.h>
#include<conio.h>
void main()
{
int n,n1,s=0;
printf("Enter a value:");
scanf("%d",&n);
while(n>0)
{
remainder=n%10;
s=s+(remainder*remainder*remainder);
n=n/10;
}
if(n1==10)
{
printf("\n Armstrong");
}
else
{
printf("\n not armstrong");
}
getch();
}
