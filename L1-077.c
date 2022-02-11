#include<stdio.h>
int main()
{
    int i,j,n,a[24];
    for(i=0;i<24;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&j);
    while(j>=0 && j<24)
    {
        if(a[j]>50)
        {
            printf("%d Yes\n",a[j]);
        }
        else{
            printf("%d No\n",a[j]);
        }
        scanf("%d",&j);
    }
    return 0;
}