#include<stdio.h>
int max(int a,int b)
{
    int t;
    while(b!=0)
    {
        t=a%b;
        a=b;
        b=t;
    }
    return a;
}
int main()
{
    int n,a,b,a1,b1,i,t;
    scanf("%d",&n);
    scanf("%d/%d",&a,&b);
    for(i=1;i<n;i++)
    {
        scanf("%d/%d",&a1,&b1);
        a=a*b1+a1*b;
        b=b*b1;
        t=max(a,b);
        a=a/t;
        b=b/t;
    }
    if(b==1)
        printf("%d",a);
    else if(a>b)
        printf("%d %d/%d",a/b,a%b,b);
    else
        printf("%d/%d",a,b);
    return 0;
}