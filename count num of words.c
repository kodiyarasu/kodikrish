#include <stdio.h>
#include<conio.h>
void main()
{
char a[100];
int count =0, i;
printf("enter the string\n");
scanf("%s",&a);
for (i = 0;a[i] != '\0';i++)
{
if (a[i] == ' ')
count++;    
}
printf("%d\n", count + 1);
}
