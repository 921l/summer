#include<stdio.h>
int main()
{
    int p1,p2,a,b,c,num=0;
    scanf("%d %d",&p1,&p2);
    scanf("%d %d %d",&a,&b,&c);
    if(p1>p2 && (a==0 ||b==0 ||c==0))
    {
           if(a==0)
               num++;
           if(b==0)
               num++;
           if(c==0)
               num++;
           printf("The winner is a: %d + %d",p1,num);
    }
   if(p1>p2 && a==1 && b==1 && c==1)
       printf("The winner is b: %d + 3",p2);
   if(p2>p1 && (a==1 ||b==1 ||c==1))
       {
           if(a==1)
               num++;
           if(b==1)
               num++;
           if(c==1)
               num++;
           printf("The winner is b: %d + %d",p2,num);
       }
   if(p2>p1 && a==0 && b==0 && c==0)
       printf("The winner is a: %d + 3",p1);
   return 0;
}