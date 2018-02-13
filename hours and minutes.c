#include <stdio.h>
void main()
{
int min;
int hour,minutes;
printf("Enter the minutes:");
scanf("%d",&min);
hour=min/60;
minutes=min%60;
printf("the hour is %d\n",hour);
if(min%60==0)
{
printf("the minutes is 0" );
}
else
printf("the minutes is %d",minutes);
}
