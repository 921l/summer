#include<stdio.h>
int main()
{
    int n,i,zuo,you;
    char a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        zuo=(a[0]-'0')+(a[1]-'0')+(a[2]-'0');
        you=(a[3]-'0')+(a[4]-'0')+(a[5]-'0');
        if(zuo==you)
        {
            printf("You are lucky!");
        }
        else{
            printf("Wish you good luck.");
        }
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}