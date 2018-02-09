#include<stdio.h>
void main()
{
int a[10],i,n;
printf("Enter n value");
scanf("%d",&n);
printf("Enter the arrays");
for(i=0;i<=3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=3;i++)
{
printf("%d",a[i]);
}
if(a[0]>a[1]&&a[0]>a[2])
{
printf("The Maximum value is %d",a[0]);
}
else if(a[1]>a[2])
{
printf("%d",a[1]);
}
else
{
printf("%d",a[2]);
}
}
