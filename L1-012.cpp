#include<stdio.h>
int main()
{
    int i,n,sum=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum*=2;
    }
    printf("2^%d = %d",n,sum);
    return 0;
}