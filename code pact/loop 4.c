#include<stdio.h>
int main ()

{
    int x,y,i,min,max;
    scanf("%d %d",&x,&y);

    if(x>y)
    {
        max=x;
        min=y;
    }
    else if (y>x)
    {
        max=y;
        min=x;
    }
    else
        printf("Reached!");

    for(i=min; i<=max; i++)
    {
        if(x==y)
        {
            printf("Reached!");
        }

        else if(x<y)
        {

            printf("%d,",x*x);
            x++;
        }


        else if(x>y)
        {

            printf("%d,",x*x);
             x--;
        }
    }


    return 0;
}
