#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
int main()
{
    int n,i,j,sum1=0,sum2=0,count1=0,count2=0;
    int a[100005];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmp);
    for(i=0;i<n/2;i++)
    {
        sum1+=a[i];
        count1++;
    }
    for(i=n/2;i<n;i++)
    {
        sum2+=a[i];
        count2++;
    }
    printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d",count2,count1,sum2-sum1);
    return 0;
}