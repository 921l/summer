#include<stdio.h>
char a[105][105];
int main()
{
    int n,i,j,flag;
    char c;
    flag=0;
    scanf("%c %d",&c,&n);
    getchar();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=a[n-1-i][n-1-j])
                flag=1;
        }
    }
    if(flag==0)
        printf("bu yong dao le\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[n-i-1][n-j-1]!=' ')
                printf("%c",c);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}