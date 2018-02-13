#include<stdio.h>
#include<conio.h>
void main()
{
int n,power=1,i;
int count=0;
printf("Enter the value:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
power=2*power;
{
if(n==power)
{
count=1;
}
}
}
if(count==1)
{
printf("yes");
}
else
{
printf("no");
}
}

