#include<stdio.h>
#include<math.h>
int main()
{
    float root,a,b,c,x;

    scanf("%f%f%f",&a,&b,&c);

    x=b*b-(4*a*c);

    if(x<0 || a==0)
    {
        printf("Imaginary\n");
    }

    else
    {
        root= (-b + sqrt(x))/(2*a);
        printf("%.2f    ",root);

        root =  root= (-b - sqrt(x))/(2*a)

        ;

        printf("%.2f    ",root);


    }


    return 0;
}
