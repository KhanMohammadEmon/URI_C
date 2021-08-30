#include<stdio.h>
float area(float b ,float h);
int main()
{
 float  b,h,Area;
 scanf("%f %f",&b,&h);
  Area = area(b,h);
  printf("%.1f",Area);
return 0;
}
float area(float b,float h)
{
    float Area = 0.5*b*h;
    return Area;
}

