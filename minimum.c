#include<stdio.h>
void main()
{
int a[10],i,n;
printf("Enter n value");
scanf("%d",&n);
printf("\n Enter the arrays");
for(i=0;i<=3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=3;i++)
{
printf("%d",a[i]);
}
if(a[0]<a[1]&&a[0]<a[2])
{
printf("\n The Minimum value is %d",a[0]);
}
else if(a[1]<a[2])
{
printf("\n %d",a[1]);
}
else
{
printf("\n %d",a[2]);
}
}
