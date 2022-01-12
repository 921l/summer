#include<stdio.h>
int main()
{
	int a,b,n,i,j,h=0,k=0;
	int ahan[100],ahua[100],bhan[100],bhua[100];
	scanf("%d %d",&a,&b);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d %d",&ahan[i],&ahua[i],&bhan[i],&bhua[i]);
	}
	for(i=0;i<n;i++)
	{
		if(ahua[i]==ahan[i]+bhan[i] && bhua[i]!=ahan[i]+bhan[i])
		{
			h++;
		}
		else if(bhua[i]==ahan[i]+bhan[i]&& ahua[i]!=ahan[i]+bhan[i])
		{
			k++;
		}
        if(h==a+1)
		{
			printf("A\n%d",k);
			break;
		}
		if(k==b+1)
		{
			printf("B\n%d",h);
			break;
		}
	}
	return 0;
}