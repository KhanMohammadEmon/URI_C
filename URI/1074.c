#include<stdio.h>
int main ()
{
    int n,i,x;

    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
        scanf("%d",&x);

           if (x==0)
           {
               printf("NULL\n");
           }
           if(x>0)
            {
                if(x%2==0)
                {
                    printf("EVEN POSITIVE\n");

                }
                else
                {
                    printf("ODD POSITIVE\n");
                }
            }
           if(x<0)
           {
               if(x%2==0)
               {
                   printf("EVEN NEGATIVEE\n");
               }
               else
               {
                   printf("ODD NEGATIVE\n");
               }
           }

    }
    return 0;
}
