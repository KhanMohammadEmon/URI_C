#include<stdio.h>
float dis(float x,float y);
int main()
{
    float x,y,ans;
    scanf("%f %f",&x,&y);

    ans = dis(x,y);
    printf("%.1f",ans);
    return 0;
}
float dis(float x,float y)
{
    float temp;
    if(x<y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    return x-y;
}
