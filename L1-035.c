#include<stdio.h>
int main()
{
    char a[10000][15];
    int i=0;
    while( scanf("%s",a[i])==1 &&a[i][0]!=".")
    {
        i++;
    }
    if(i<3)
    {
        printf("Momo... No one is for you ...");
    }
    else 
    {   
        if(i<14)
        {
            printf("%s is the only one for you...",a[1]);
        }
        else
        {
            printf("%s and %s are inviting you to dinner...",a[1],a[13]);
        }
    }
    return 0;
}