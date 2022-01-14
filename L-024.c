#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    if(n<6)
    {
        printf("%d",n+2);
    }
    else{
        if(n==6)
        {
            printf("1");
        }
        else if(n==7)
        {
            printf("2");
        }
    }
    return 0;
}