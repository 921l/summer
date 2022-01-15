#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,h,f=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        f=0;
        scanf("%d",&j);
        if(j==1)
        {
            printf("No");
        }
        else{
            for(h=2;h<sqrt(j);h++)
            {
                if(j%h==0)
                {
                    f=1;
                    printf("No");
                    break;
                }
            }
            if(f==0)
            {
                printf("Yes");
            }
        }
        printf("\n");
    }
    return 0;
}