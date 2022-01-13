#include<stdio.h>
int main()
{
    int n,k,q=0,ou=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&k);
        if(k%2==0)
        {
            q++;
        }
        else{
            ou++;
        }
    }
    printf("%d %d",ou,q);
    return 0;
}