#include<stdio.h>
int main()
{
    int n,i,k,m;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%d%d",a,&k,&m);
        if( k<15 || k>20 || m<50 ||m>70)
        {
            printf("%s",a);
        if(i!=n-1)
        {
            printf("\n");
        }
        }
    }
    return 0;
}