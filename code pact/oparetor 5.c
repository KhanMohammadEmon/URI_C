#include<stdio.h>
int main ()
{
    int x,y,a,b;
    scanf ("%d%d",&x,&y);
    if(a=x)
    {
        if(b=y)
            printf("Incremented Value: %d\n",a+=b);
    }
    if(a=x)
    {
        if(b=y)
            printf("Decremented Value: %d\n",x-=y);
    }

    return 0;
}
