#include<stdio.h>void main()
{
int a,i;
printf("Enter a number");
scanf("%d",&a);
i=0;
while(a!=0)
{
a/=10;
++i;
}
printf("%d",i);
}

