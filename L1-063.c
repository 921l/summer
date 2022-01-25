#include<stdio.h>
int main()
{
    int n,weight,height,sex,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d",&sex,&height,&weight);
        if(sex==0)
        {
            if(height>129)
            {
                printf("ni li hai!");
            }
            else if(height<129)
            {
                printf("duo chi yu!");
            }
            else
            {
                printf("wan mei!");
            }
            printf(" ");
            if(weight>25)
                printf("shao chi rou!");
            else if(weight<25)
                printf("duo chi rou!");
            else
                printf("wan mei!");
        }
        if(sex==1)
        {
            if(height>130)
            {
                printf("ni li hai!");
            }
            else if(height<130)
            {
                printf("duo chi yu!");
            }
            else
            {
                printf("wan mei!");
            }
            printf(" ");
            if(weight>27)
                printf("shao chi rou!");
            else if(weight<27)
                printf("duo chi rou!");
            else
                printf("wan mei!");
        }
        printf("\n");
    }
    return 0;
}