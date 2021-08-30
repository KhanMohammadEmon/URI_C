#include<stdio.h>
int main ()
{
    double a , b ,c ,p,are ;

    scanf("%lf %lf %lf" ,&a ,&b ,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        p = a+b+c;

        printf("Perimetro = %.1lf\n",p);
    }
    else
    {
        are = ((a+b)*c)/2;

        printf("Area = %.1lf\n",are);
    }
    return 0 ;
}
