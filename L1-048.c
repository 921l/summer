#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c;
    int hang1,lie1,hang2,lie2,i,j,h;
    scanf("%d %d",&hang1,&lie1);
    for(i=0;i<hang1;i++)
    {
        for(j=0;j<lie1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&hang2,&lie2);
    for(i=0;i<hang2;i++)
    {
        for(j=0;j<lie2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    if(lie1!=hang2)
    {
        printf("Error: %d != %d",lie1,hang2);
    }
    else
    {
        printf("%d %d\n",hang1,lie2);
        for(i=0;i<hang1;i++)
        {
            if(i)
            {
                printf("\n");
            }
            for(j=0;j<lie2;j++)
            {
                c=0;
                for(h=0;h<lie1;h++)
                {
                    c+=a[i][h]*b[h][j];
                }
                if(j)
                    printf(" ");
                printf("%d",c);
            }
        }
    }
    return 0;
}