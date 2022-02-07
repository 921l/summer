#include<stdio.h>
int main()
{
    int n,m,i,j;
    double a;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lf",&a);
        if(a<m)
        {
            printf("On Sale! %.1f\n",a);
        }
    }
    return 0;
}