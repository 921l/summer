#include<stdio.h>
int jiecheng(int n)
{
    int a,i,j=1;
    for(i=1;i<=n;i++)
    {
        j*=i;
    }
    return j;
}
int main()
{
    int n,i,sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=jiecheng(i);
    }
    printf("%d",sum);
    return 0;
}