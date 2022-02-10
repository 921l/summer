#include<stdio.h>
int main()
{
    int a1,a2,n,a[10000],k,h,i,j=2;
    scanf("%d %d %d",&a[0],&a[1],&n);
    for(i=2;i<n;i++)
    {
        k=a[i-1]*a[i-2];
        if(k>=10) 
        {
            a[j+1]=k%10;
            a[j]=k/10;
            j+=2;
        }
        else
        {
            a[j]=k;
            j++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
         printf("%d ",a[i]);
        else
         printf("%d",a[i]);
    }
	return 0;
}