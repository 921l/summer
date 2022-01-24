#include<stdio.h>
int main()
{
    int a[1005]={0};
    int n,i,j,k,f,flag=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
       for(j=0;j<k;j++)
       {
           scanf("%d",&f);
           a[f]++;
       }
    }
    max=a[0];
   for(i=1;i<=1000;i++)
   {
       if(a[i]>=max)
       {
           flag=i;
           max=a[flag];
       }
       if(a[i]==0)
           continue;
   }
    printf("%d %d",flag,a[flag]);
    return 0;
}