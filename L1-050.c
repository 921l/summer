#include<stdio.h>
#include<math.h>
int main()
{
    int l,n,q,k,i,j;
    char a[10]={"aaaaaaaaaa"};
    scanf("%d%d",&n,&k);
    q=pow(26,n)-k;
    for(i=n-1;i>=0;i--)
    {
        a[i]=a[i]+q%26;
        q=q/26;
    }
    for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}