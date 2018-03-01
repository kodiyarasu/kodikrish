#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char a[50];
printf("Enter the value:");
scanf("%d",&n);
printf("\n Enter the character:");
scanf("%s",&a);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
}
