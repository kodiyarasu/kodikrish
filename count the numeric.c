#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0;
printf("Enter the values:");
scanf("%d",&n);
while(n)
{
n=n/10;
count++;
}
printf("%d",count);
}
