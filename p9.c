#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,j,k;
printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);
printf("The prime number is:");
for(i=a+1;i<b;i++)
{
k=1;
for(j=0;j<i/2;j++)
{
if(i%j==0)
{
k=0;
break;
}
}
if(k==0)
{
printf("\n %d",i);
}
}
}
