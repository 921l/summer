#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf",&a,&b);
    c=a/(b*b);
    if(c>25)
    {
        printf("%.1f\nPANG",c);
    }
    else
        printf("%.1f\nHai Xing",c);
    return 0;
}