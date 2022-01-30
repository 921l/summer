#include<stdio.h>
#include<math.h>
struct pe {
    char name[20];
    int num;
}p[10010];
int main()
{
    int n,i,j,h,min,a,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d",p[i].name,&p[i].num);
        sum+=p[i].num;
    }
    a=(sum/n)/2;
    i=0;
    min=p[0].num;
        for(j=0;j<n;j++)
        {
            if(fabs(min-a)>fabs(p[j].num-a))
            {
               min=p[j].num;
               i=j;
            }
        }
    printf("%d %s\n",a,p[i].name);
    return 0;
}