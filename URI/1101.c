#include<stdio.h>
int main ()
{
    int m,n,i,sum=0;

while(1)
{
   scanf("%d %d",&m,&n);

   if(n<=0 || m<=0)
    {
       break;
    }

      else if(m > n)
      {
        for(i=n,sum=0;i<=m;i=i+1)
        {
        printf("%d\n",i);
        sum=sum+i;
       }
         printf("Sum=%d\n",sum);
      }

    else if(n > m)
    {
    for(i=m,sum=0;i<=n;i=i+1)
    {
        printf("%d\n",i);
        sum=sum+i;
    }


    printf("Sum=%d\n",sum);
    }
}

    return 0 ;
}
