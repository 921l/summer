#include<stdio.h>
int main()
{
    long int a[1001][3],d[1000];
    int b,c,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld %ld %ld",&a[i][0],&a[i][1],&a[i][2]);
    }
    scanf("%d",&c);
    for(i=0;i<c;i++)
    {
        scanf("%d",&d[i]);
    }
    for(i=0;i<c;i++)
    {
        for(j=0;j<n;j++)
        {
            if(d[i]==a[j][1])
            {
                printf("%ld %ld\n",a[j][0],a[j][2]);
                break;
            }
        }
    }
    return 0;
}