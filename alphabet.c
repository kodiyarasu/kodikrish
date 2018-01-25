#include<stdio.h>
void main()
{
char c;
printf("Enter a character");
scanf("%c",&c);
{
if(('a'<=c && c<='z')||('A'<=c && c<='Z'))
{
printf("alphabet");
}
else
{
printf("Not alphabet");
}
}
