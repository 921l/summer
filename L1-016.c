#include<stdio.h>
int main()
{
    int n,i,j,sum=0,z,k=0;
    int power[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char a[19],M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        sum=0;
        for(j=0;j<17;j++)
        {
            sum+=(a[j]-'0')*power[j];
        }
        z=sum%11;
        if(a[17]!=M[z])
        {
            printf("%s\n",a);
            k=1;
        }
    }
    if(k==0)
    {
        printf("All passed");
    }
    return 0;
}