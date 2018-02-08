#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("Enter the number a and b:");
scanf("%d%d",&a,&b);
printf("\n Before swapping a=%d,b=%d",a,b);
c=a;
a=b;
b=c;
printf("\n after swapping a=%d,b=%d",a,b);
getch();
}
