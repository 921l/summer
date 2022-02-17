#include<stdio.h>
int main()
{
    double a[15];
    int n,k,m,i,j,h=0,z,u;
    double ave[10005],sum,l;
    scanf("%d %d %d",&n,&k,&m);
    for(i=0;i<n;i++)
    {
        sum=0.0;
        for(j=0;j<k;j++)
            scanf("%lf",&a[j]);
        for(j=0;j<k-1;j++)
        {
            for(z=0;z<k-1;z++)
            {
                if(a[z]>a[z+1])
                {
                    l=a[z];
                    a[z]=a[z+1];
                    a[z+1]=l;
                }
            }
        }
        for(u=1;u<k-1;u++)
            sum+=a[u];
        ave[h]=sum/(k-2);
        h++;
    }
    for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(ave[j]<ave[j+1])
                {
                    l=ave[j];
                    ave[j]=ave[j+1];
                    ave[j+1]=l;
                }
            }
        }
    printf("%.3lf",ave[m-1]);
    for(i=m-2;i>=0;i--)
    {
        printf(" %.3lf",ave[i]);
    }
    return 0;
}