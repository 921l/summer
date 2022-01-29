#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,sum,len,m,k;
    char a[35];
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++)
    {
        sum=pow(2,m);
        scanf("%s",a);
        len=strlen(a);
        for(j=0;j<len;j++)
        {
            if(a[j]=='y')
            {
                k=pow(2,len-j-1);
                sum=sum-k;
            }
        }
        printf("%d\n",sum);
    }
    system("pause");
    return 0;
}