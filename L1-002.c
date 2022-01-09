#include<stdio.h>
#include<math.h>
int main()
{
	int n,a,row,i,j,k,n1;
	char ch;
	scanf("%d %c",&n,&ch);
	a=(n+1)/2;
	row =(int)sqrt(a);
	for(i=0;i<row;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*(row-i)-1;k++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	for(i=1;i<row;i++)
	{
		for(j=row-i-1;j>0;j--)
		{
			printf(" ");
		}
		for(k=0;k<2*(i+1)-1;k++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
	n1=n-(2*a*a)-1;
	if(n1==0)
	{
		printf("%d",n1);
	}
	system("pause");
	return 0;
}
