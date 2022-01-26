#include<stdio.h>
int main()
{
    int n,i,j;
    double k,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&k);
        sum+=1.0/k;
    }
    sum=sum/(n*1.0);
    printf("%.2f",1.0/sum);
    return 0;
}