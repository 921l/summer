#include<stdio.h>
int main()
{
    int n,i;
    double h;
    char sex;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%c %lf",&sex,&h);
        if(sex=='F')
        {
            printf("%.2f",h*1.09);
        }
        else if(sex=='M')
        {
            printf("%.2f",h/1.09);
        }
        if(i!=n-1)
        {
            printf("\n");
        }
    }
    return 0;
}