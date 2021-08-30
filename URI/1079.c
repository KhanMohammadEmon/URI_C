#include<stdio.h>
int main ()
{
    int n,i;
    float x,y,z,avg;
    scanf("%d",&n);

    for(i=1;i<=n;i=i+1)
    {
     scanf("%f %f %f",&x ,&y ,&z);
     avg = (x*2 + y*3 + z*5)/10;
     printf("%.1f\n",avg);
    }
    return 0;
}

