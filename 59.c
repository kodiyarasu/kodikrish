#include<stdio.h>
#include<conio.h>
void main()
{
int a[i],i,b;
printf("Enter 10 values:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<10;i++)
{
if(a[i]>b)
{
b=a[i];
}
}
printf("%d",b);
}
