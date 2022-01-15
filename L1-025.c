#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[20],b[20];
    int j,i;
    int d=0,d2=0,sum1=0,sum2=0;
    scanf("%s",a);
    gets(b);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]-'9'>0 || a[i]-'0'<0)
        {
            d=1;
            break;
        }
    }
    if(d==0)
    {
        for(i=0;i<strlen(a);i++)
        {
            sum1+=(a[i]-'0')*pow(10,strlen(a)-i-1);
        }
    }
    if(sum1==0||sum1>1000)
    {
        d=1;
    }
    for(j=1;j<strlen(b);j++)
    {
        if(b[j]-'0'<0 || b[j]-'9'>0)
        {
            d2=1;
            break;
        }
    }
    if(d2==0 )
    {
        for(j=1;j<strlen(b);j++)
        {
            sum2+=(b[j]-'0')*pow(10,strlen(b)-j-1);
        }
    }
    if(sum2==0 ||sum2>1000)
    {
        d2=1;
    }
    if(d!=0 && d2==0)
    {
        printf("? + %d = ?",sum2);
    }
    else if(d!=0 && d2!=0)
    {
        printf("? + ? = ?");
    }
    else if(d==0 && d2!=0)
    {
        printf("%d + ? = ?",sum1);
    }
    else if(d==0 && d2==0)
    {
        printf("%d + %d = %d",sum1,sum2,sum1+sum2);
    }
    return 0;
}