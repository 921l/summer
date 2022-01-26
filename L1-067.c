#include<stdio.h>
int main()
{
    int n;
    double a,b,c;
    scanf("%lf %d %lf",&a,&n,&b);
    if(n==1)
    {
        c=a*1.26;
        if(c>=b)
        {
            printf("%.2f T_T",c);
        }
        else {
            printf("%.2f ^_^",c);
        }
    }
    if(n==0)
    {
        c=a*2.455;
        if(c>=b)
        {
            printf("%.2f T_T",c);
        }
        else {
            printf("%.2f ^_^",c);
        }
    }
    return 0;
}