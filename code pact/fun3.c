#include<stdio.h>
float funx(float x);
int main()
{
    float x,ans;
    scanf("%f",&x);
   ans= funx(x);
   printf("%f",ans);

return 0;
}
float funx(float x)
{
    return 1/(x*x);
}
