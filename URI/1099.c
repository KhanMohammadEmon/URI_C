#include<stdio.h>
int main ()
{
    int i,j,n,x,y,sum=0;
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
     scanf("%d %d",&x ,&y);

     if(x==y)
     {
          sum = 0;

     }

     else if(x<y)
     {
         for(j=x+1,sum =0; j<y; j=j+1)
         {
            if (j%2!=0)
            {
                sum=sum+j;
            }

         }

     }
     else if(x>y)
     {
         for(j=y+1,sum = 0; j<x ;j=j+1)
         {
            if (j%2!=0)
            {
                sum=sum+j;
            }

         }

     }
      printf("%d\n",sum);
    }
    return 0;
}
