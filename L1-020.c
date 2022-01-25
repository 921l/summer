#include<stdio.h>
int main()
{
    int n,n1,i,j,k,h,t,flag=0;
    int a[1000000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(j=0;j<k;j++)
        {
            scanf("%d",&h);
            if(k!=1)
               a[h]++;
        }
    }
    scanf("%d",&n1);
    t=1;
    for(i=0;i<n1;i++)
    {
        scanf("%d",&k);
        if(a[k]==0)
        {
            flag=1;
            if(t==1)
                printf("%05d",k);
            else
                printf(" %05d",k);
            a[k]=1;
            t++;
        }
    }
    if(flag==0)
    {
        printf("No one is handsome");
    }
    return 0;
}