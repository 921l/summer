#include <stdio.h>
struct student{
    int sex;
    char name[10];
}stu[53];
struct par{
    char *a;
    char *b;
}pa[27];
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&stu[i].sex);
        scanf("%s",stu[i].name);
    }
    for(i=0;i<n/2;i++)
    {
        for(j=n-1;j>i;j--)
        {
            if(stu[i].sex!=stu[j].sex && stu[j].sex!=2)
            {		
                pa[i].a=stu[i].name;
                pa[i].b=stu[j].name;
				stu[j].sex=2;
                break;
            }
        }
    }
    for(i=0;i<n/2;i++)
    {
		printf("%s %s\n",pa[i].a,pa[i].b);
    }
	system("pause");
    return 0;
}