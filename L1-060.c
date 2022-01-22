#include<stdio.h>
int main()
{
    int x,y,s;
    scanf("%d %d",&x,&y);
    s=5000-50*y-50*(100-x);
    printf("%d",s);
    return 0;
}