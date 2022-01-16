#include<stdio.h>
int main()
{
    int n,i,j,h,w;
    float low,high,biao;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&h,&w);
        biao=(h-100)*0.9*2;
        if(fabs(w-biao)<0.1*biao)
            printf("You are wan mei!");
        else if(w<biao)
            printf("You are tai shou le!");
        else
            printf("You are tai pang le!");
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}