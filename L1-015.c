#include<stdio.h>
int main()
{
    int n,i,j;
    char ch;
    scanf("%d %c",&n,&ch);
        for(i=0;i<(int)(n/2.0+0.5);i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%c",ch);
            }
            printf("\n");
        }
    return 0;
}