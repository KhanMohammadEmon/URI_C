#include<stdio.h>
int main ()
{
    double a , b , c,j ,k ,l,temp;
    j = a*a;
    k = b*b;
    l=c*c;

    scanf("%lf %lf %lf",&a ,&b ,&c );

     if (a < b){temp = a;a = b;b = temp;}
    if (b < c){temp = b;b = c;c = temp;}
    if (a < b){temp = a;a = b;b = temp;}


    if(a>= (b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
     else if(j = (k + l))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if(j > (k+l))
    {
        printf("TRIANGULO OBTUSANGULO\n");

    }
      else if(j < (k+l))
    {
        printf("TRIANGULO ACUTANGULO\n");

    }



     if(a==b && b==c)
    {
        printf("TRIANGULO EQUILATERO\n");

    }
    else if(a==b || b==c || a==c)
    {
        printf("TRIANGULO ISOSCELES\n");

    }


    return 0 ;

}
