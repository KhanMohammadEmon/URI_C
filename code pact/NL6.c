#include<stdio.h>
int main ()
{
    int number, i,j,a,b ;

    scanf("%d",&number);


    for(i=1; i<=number; i++)
    {
        if(i%2==0)
        {
            a=0;
            b=1;

            for(j=1; j<=number; j++)
            {
                if(j%2!=0)
                    printf("%d ",a);
                else
                    printf("%d ",b);
            }
        }
        else
        {
            a=1;
            b=0;
            for(j=1; j<=number; j++)
            {
                if(j%2!=0)
                    printf("%d ",a);
                else
                    printf("%d ",b);

            }
        }
         printf("\n");
    }

    return 0;
}
