#include<stdio.h>
#include<conio.h>
void main()
{
int a=150,b=160;
scanf("%d%d",&a,&b);
printf("Befor swapping a=%d,b=%d",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("\n After swapping a=%d,b=%d",a,b);
}
