#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,r=0,i;
    scanf("%d %d",&x,&y);
    char a[x][1000];
    char b[x][1000];
    getchar();
    for(i=0;i<x;i++)
    {
        gets(a[i]);
        if(strstr(a[i],"qiandao")==NULL &&strstr(a[i],"easy")==NULL)
            strcpy(b[r++],a[i]);
    }
    if(r<=y)
        printf("Wo AK le");
    else
        printf("%s",b[y]);
    return 0;
}