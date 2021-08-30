#include<stdio.h>

int main()
{
    int i,n,count;
    scanf("%d",&count);
     for(n=1;n<=count;n++)
     {
         for(i=1;i<=n;i++)
         {
             printf("*");
         }
           printf("\n");
     }
    return 0;
}
