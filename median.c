#include<stdio.h>
void main()
{
int a[100],i,j,c;
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<3;i++)
{
for(j=i+1;j<3;j++)
{
if(a[i]>a[j])
{
c=a[i];
a[i]=a[j];
a[j]=c;
}
}
}
for(i=0;i<3;i++)
{
printf("\n %d",a[i]);
}
for(i=0;i<3;i++)
{
printf("%d\t",a[i/2]);
}
}
