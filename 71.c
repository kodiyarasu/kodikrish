#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100];
printf("ENTER THE STRING:");
scanf("%s",a);
strcpy(b,a);
strrev(b);
if(strcmp(a,b)==0)
{
printf("Palindrome");
}
else
{
printf("Not palindrome");
}
}
