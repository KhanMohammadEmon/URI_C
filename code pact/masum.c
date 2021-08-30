#include<stdio.h>
int main ()
{
    int n,a,b,j,i;
    scanf("%d",&n);


    for(j=1; j<=n; j++)
    {
        if(j%2!=0)
        {
            a=1;
            b=0;
            for(i=1; i<=n; i++)
            {
                if(i%2!=0)
                    printf("%d",a);
                else
                    printf("%d",b);
            }
        }
        else
        {
            a=0;
            b=1;
            for(i=1; i<=n; i++)
            {
                if(i%2!=0)
                    printf("%d",a);
                else
                    printf("%d",b);
            }
        }



    printf("\n");

}

return 0;
}
