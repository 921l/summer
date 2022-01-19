#include<stdio.h>
int main()
{
    int n,i=1;
    while(1)
    {
        scanf("%d",&n);
        if(n!=250)
        {
           i++;
        }
        else
            break;
    }
    printf("%d",i);
    return 0;
}