#include<stdio.h>
int main()
{
	int a,b,i,j=0,sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<b+1;i++)
	{
		j++;
		if(j!=6)
		{
			printf("%5d",i);
			sum+=i;
		}
		if(j==6)
		{
            printf("\n");
			printf("%5d",i);
			j=1;
			sum+=i;
		}
	}
    printf("\n");
	printf("Sum = %d",sum);
	system("pause");
	return 0;
}