#include<stdio.h>
#include<conio.h>
void main()
{
int a, temp, rem, sum = 0;
printf("\n Enter a Number:");
scanf("%d",&a);
for(temp =a;a!= 0;a++)
{
rem =a%10;
sum = (sum*10) + rem;
num1 = a/10;
}
if(sum == temp)
{
printf("\n %d is a Palindrome Number\n", temp);
}
else
{
printf("\n %d is not a Palindromic Integer\n", temp);
}
}
