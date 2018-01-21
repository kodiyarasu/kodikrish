#include<stdio.h>
void main()
{
char a[6]={'a','e','i','o','u'};
char b;
printf("Enter a alphabet");
scanf("%c",&b);
if(a[0]==b||a[1]==b||a[2]==b||a[3]==b||a[4]==b)
{
printf("vowel");
}
else
{
printf("consonant");
}
}
