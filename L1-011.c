#include<stdio.h>
#include<string.h>
int main()
{
    char a[10001],b[10001];
    int i=0,c,d,n,k=0;
    a[0]=getchar();
    while(a[i]!='\n')
    {
        i++;
        a[i]=getchar();
    }
    b[0]=getchar();
    i=0;
    while(b[i]!='\n')
    {
        i++;
        b[i]=getchar();
    }
    c=strlen(a);
    d=strlen(b);
    for(i=0;i<c;i++)
    {
        k=0;
        for(n=0;n<d;n++)
        {
            if(a[i]!=b[n])
            {
                k++;
            }
        }
        if(k==strlen(b))
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}