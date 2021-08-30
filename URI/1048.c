#include <stdio.h>>
int main ()
{
   double n,i,j;
    int a,b,c,d,e;
    scanf("%lf",&n);

    if( 0 <= n && n <= 400.00)
    {
     a = 15;
     i =(a*n) / 100;
     j = n+i;

     printf("Novo salario: %.2lf\n",j);
     printf("Reajuste ganho: %.2lf\n",i);
     printf("Em percentual: %d %%\n",a);
    }

    else if( 400.01 <= n && n <= 800.00)
    {
     b = 12;
     i =(b*n) / 100;
     j = n+i;

     printf("Novo salario: %.2lf\n",j);
     printf("Reajuste ganho: %.2lf\n",i);
     printf("Em percentual: %d %%\n",b);
    }

   else if( 800.01 <= n && n <= 1200.00)
    {
     c = 10;
     i =(c*n) / 100;
     j = n+i;

     printf("Novo salario: %.2lf\n",j);
     printf("Reajuste ganho: %.2lf\n",i);
     printf("Em percentual: %d %%\n",c);
    }

   else if( 1200.01 <= n && n <= 2000.00)
    {
     d = 7;
     i =(d*n) / 100;
     j = n+i;

     printf("Novo salario: %.2lf\n",j);
     printf("Reajuste ganho: %.2lf\n",i);
     printf("Em percentual: %d %%\n",d);
    }

   else if( n > 2000.00)
    {
     e = 4;
     i =(e*n) / 100;
     j = n+i;

     printf("Novo salario: %.2lf\n",j);
     printf("Reajuste ganho: %.2lf\n",i);
     printf("Em percentual: %d %%\n",e);
    }

return 0;
}
