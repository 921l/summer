#include<stdio.h>
#include<string.h>
int main()
{
    char a[53];
    int i,num=0,j=0;
    double total;
    gets(a);
    if(a[0]=='-')
    {
        for(i=1;i<strlen(a);i++)
        {
            if(a[i]=='2')
            {
                num++;
            }
        }
        if(a[i-1]=='2'||a[i-1]=='4'||a[i-1]=='6'||a[i-1]=='8'||a[i-1]=='0')
        {
            total=(1.0*num/(i-1))*1.5*2;
            printf("%.2f%%",total*100);
        }
        else{
            total=(1.0*num/(i-1))*1.5;
            printf("%.2f%%",total*100);
        }
    }
    else{
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]=='2')
            {
                num++;
            }
        }
        if(a[i-1]=='2'||a[i-1]=='4'||a[i-1]=='6'||a[i-1]=='8'||a[i-1]=='0')
        {
            total=(1.0*num/(i))*2;
            printf("%.2f%%",total*100);
        }
        else{
            total=1.0*num/(i);
            printf("%.2f%%",total*100);
        }
    }
    return 0;
}