#include<stdio.h>
#include<string.h>
int main()
{
    int n,m=0,i,j;
    char a[15];
    scanf("%d",&n);
    while(1)
    {
        m++;
        scanf("%s",a);
        if(strcmp(a,"End")==0)
            break;
        if(strcmp(a,"JianDao")==0 && m%(n+1)!=0)
            printf("ChuiZi\n");
        if(strcmp(a,"Bu")==0 && m%(n+1)!=0)
            printf("JianDao\n");
        if(strcmp(a,"ChuiZi")==0 && m%(n+1)!=0)
            printf("Bu\n");
        if(strcmp(a,"JianDao")==0 && m%(n+1)==0)
            printf("JianDao\n");
        if(strcmp(a,"ChuiZi")==0 && m%(n+1)==0)
            printf("ChuiZi\n");
        if(strcmp(a,"Bu")==0 && m%(n+1)==0)
            printf("Bu\n");
    }
    return 0;
}