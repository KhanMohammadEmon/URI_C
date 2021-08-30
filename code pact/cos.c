#include<stdio.h>
#include<math.h>
int main()
{
    float x,red,result;
    const float PI=3.14159;
    scanf("%f",&x);
    red = x*(PI/180.0);

    result =sin(red/2);

    printf("%f",result);
    return 0;
}
