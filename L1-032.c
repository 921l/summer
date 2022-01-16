#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,len;
    char ch,a[600000];
    scanf("%d %c",&n,&ch);
    getchar();
    gets(a);
    len=strlen(a);
    if(n>=len)
    {
        for(i=0;i<n-len;i++)
        {
            printf("%c",ch);
        }
        printf("%s",a);
    }
    else
    {
        for(i=len-n;i<len;i++)
        {
            printf("%c",a[i]);
        }
    }
return 0;
}