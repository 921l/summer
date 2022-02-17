#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    int n,flag1=0,flag2=0,i,j,len,num=0,con=0;
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
    {
        gets(a);
        len=strlen(a);
        for(j=0;j<len;j++)
        {
            if(a[j]==' ')
                num++;
            if(a[j]==',')
            {
                if(a[j-1]=='g' && a[j-2]=='n' && a[j-3]=='o')
                    flag1=1;
            }
            if(a[j]=='.')
            {
                if(a[j-1]=='g' && a[j-2]=='n' && a[j-3]=='o')
                    flag2=1;
            }
        }
        if(flag1==0 || flag2==0)
        {
            printf("Skipped\n");
        }
        else
        {
            for(j=0;j<len;j++)
            {
                printf("%c",a[j]);
                if(a[j]==' ')
                    con++;
                if(con==num-2)
                    break;
            }
             printf("qiao ben zhong.\n");
        }
        flag1=0;
        flag2=0;
        num=0;con=0;
    }
    return 0;
}