#include<stdio.h>
int main ()
{
    int n,a,b,j;
    scanf("%d",&n);


    for(j=1; j<=n; j++)
    {
        a=1;
        b=0;
        if(j%2!=0)
        {
            printf("%d",a);
        }
        else
            printf("%d",b);

    }

    return 0;
}
