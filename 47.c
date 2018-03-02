#include<stdio.h>
#include<conio.h>
void main() 
{
int a[50];
int i,b;
clrscr();
printf("Enter n value");
scanf("%d",&b);
printf("Enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
int max=a[0];
int min=a[0];
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("\n%d",min);
printf("\n%d",max);
getch();
}
