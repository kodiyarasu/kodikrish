#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the value of a:");
scanf("%d",&a);
printf("\n Enter the values of b and c:");
scanf("%d%d",&b,&c);
if(a>b)
{
if(a<c)
{
printf("Yes");
}
else
{
printf("No");
}
}
}
