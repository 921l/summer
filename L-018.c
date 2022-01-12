#include<stdio.h>
int main()
{
	char a[7];
	int hour,min,i,j;
	gets(a);
	hour=(a[0]-'0')*10+(a[1]-'0');
	min=(a[3]-'0')*10+(a[4]-'0');
	if((hour>=0 && hour<12 )|| (hour==12 && min==0))
	{
		printf("Only %s.  Too early to Dang.",a);
	}
	else
	{
		if(min!=0)
		{
			for(i=0;i<hour+1-12;i++)
			{
				printf("Dang");
			}
		}
		else
		{
			for(i=0;i<hour-12;i++)
			{
				printf("Dang");
			}
		}
	}
	return 0;
}