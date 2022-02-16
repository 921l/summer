#include<stdio.h>
int main()
{
    int a[3][3];
    int b[10]={0,1,2,3,4,5,6,7,8,9};
    int i,j,n,q,w,e,sum,flag,flag1;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
            b[a[i][j]]=0;
            if(a[i][j]==0)
            {
                flag=i;
                flag1=j;
            }
        }
    }
    for(i=1;i<10;i++)
    {
        if(b[i]!=0)
            a[flag][flag1]=b[i];
    }
    scanf("%d %d %d %d %d %d",&i,&j,&n,&q,&w,&e);
    printf("%d\n%d\n%d\n",a[i-1][j-1],a[n-1][q-1],a[w-1][e-1]);
    scanf("%d",&i);
    if(i==1)
        sum=a[0][0]+a[0][1]+a[0][2];
    if(i==2)
         sum=a[1][0]+a[1][1]+a[1][2];
    if(i==3)
         sum=a[2][0]+a[2][1]+a[2][2];
    if(i==4)
         sum=a[1][0]+a[2][0]+a[0][0];
    if(i==5)
         sum=a[0][1]+a[1][1]+a[2][1];
    if(i==6)
         sum=a[0][2]+a[1][2]+a[2][3];
    if(i==7)
         sum=a[0][0]+a[1][1]+a[2][2];
    if(i==8)
         sum=a[0][2]+a[1][1]+a[2][0];
    if(sum==6)
        printf("10000");
    if(sum==7 || sum==19)
        printf("36");
    if(sum==8)
        printf("720");
    if(sum==9)
        printf("360");
    if(sum==10)
        printf("80");
    if(sum==11)
        printf("252");
    if(sum==12)
        printf("108");
    if(sum==13 || sum==16)
        printf("72");
    if(sum==14)
        printf("52");
    if(sum==15 || sum==17)
        printf("180");
    if(sum==18)
        printf("119");
    if(sum==20)
        printf("306");
    if(sum==21)
        printf("1080");
    if(sum==22)
        printf("144");
    if(sum==23)
        printf("1800");
    if(sum==24)
        printf("3600");
    return 0;
}