#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j=0,year; 
    int a[4];
    scanf("%d %d",&year,&n);
        for(i=year;i<10000;i++)
        {
            j=1;
            a[0]=i/1000;
            a[1]=i/100%10;
            a[2]=i%100/10;
            a[3]=i%10;
            if(a[0]!=a[1] && a[0]!=a[2] &&a[0]!=a[3])
                j++;
            if(a[1]!=a[2] && a[1]!=a[3])
                j++;
            if(a[2]!=a[3])
                j++;
            if(j==n)
                break;
        }
    printf("%d %04d",i-year,i);
    return 0;
}