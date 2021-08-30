#include<stdio.h>
#include<math.h>
int main ()
{
    float x,a,b,c,d,e,xrad;
    const float PI=3.14159;
    scanf ("%f",&x);

    xrad = x*(PI/180.0);
    b=2*cos(xrad)*cos(xrad);
    c=sqrt(3)*sin(xrad);
    e=sin(xrad/2);
    a=b-c+e;

    printf("%f\n",a);

    return 0;
}
