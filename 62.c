#include <stdio.h>
#include<string.h>
void main()
{
char k[10];
scanf("%s",k);
int i,flag=0,m;
m=strlen(k);
for(i=0;i<m;i++)
{
		if(k[i]=='1' || k[i]=='0')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("yes");
	}
	
}
