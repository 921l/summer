#include<stdio.h>
struct press{
    int n;
    int num;
}a[4];
int main()
{ 
    int i,j,min,tiao,max=0,total=0;
    scanf("%d %d %d %d %d %d",&a[0].n,&a[1].n,&a[2].n,&a[3].n,&min,&tiao);
    for(i=0;i<4;i++)
    {
        a[i].num=i+1;
        if(a[i].n>max)
            max=a[i].n;
        if(a[i].n<min)
        {
            total++;
            a[i].num=0;
        }
    }
    for(i=0;i<4;i++)
    {
        a[i].n=max-a[i].n;
        if(a[i].n>tiao)
        {
            a[i].num=0;
            total++;
        }
    }
   if(total==0)
   {
       printf("Normal");
   }
   if(total==1)
    {
        for(i=0;i<4;i++)
        {
            if(a[i].num==0)
            {
                printf("Warning: please check #%d!",i+1);
                break;
            }
        }
    }
    if(total>=2)
    {
        printf("Warning: please check all the tires!");
    }
    return 0;
}