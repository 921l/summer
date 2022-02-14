#include<stdio.h>
int main()
{
    int n,x=0,i,sum=0;
    scanf("%d",&n);
    for(i=0;;i++)
    {
        if(x<n)
        {
            x=x*10+1;
            sum++;
        }
        else
            break;
    }
    while(1)
    {
         printf("%d",x/n);
        if(x%n==0)
            break;
        else
        {
            x=x%n*10+1;
            sum++;
        }
    }
    printf(" %d",sum);
    return 0;
}