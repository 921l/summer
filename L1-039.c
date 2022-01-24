#include<stdio.h>
#include<string.h>
int main()
{
    char a[10010];
	char s[1001][1001];
    int n,len,i,j,m,h=0;
    scanf("%d",&n);
    getchar();
    gets(a);
    len=strlen(a);
    m=len/n+1;
    if(len%n==0)
        m--;
    for(j=m-1;j>=0;j--)
    {
        for(i=0;i<n;i++)
        {
			s[i][j]=a[h]?a[h]:' ';
            h++;
        }
    }
    for(i=0;i<n;i++)
    {
		for(j=0;j<m;j++)
		{
			printf("%c",s[i][j]);
		}
		printf("\n");
    }
    return 0;
}