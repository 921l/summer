#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char *p;
    int count=0,flag=0,n=0;
    gets(a);
    while(strcmp(".",a)!=0)
    {
        count++;
        p=strstr(a,"chi1 huo3 guo1");
        if(p!=NULL)
        {
            if(n==0)
            {
              flag=count;
              n=1;
            }
            else
                n++;
        }
        gets(a);
    }
    printf("%d\n",count);
    if(n!=0)
        printf("%d %d",flag,n);
    else
        printf("-_-#");
    return 0;
}