#include<stdio.h>
int main ()
{
    int number,j,i,k;

    scanf("%d",&number);

    for(i=number;i>=1;i--)
    {
        //jace

        for(j=1;j<=number-i;j++)
        {
            printf(" ");

        }

        for(k=1;k<=i;k++)
        {
            printf("*");

        }
        for(k=2;k<=i;k++)
        {
             printf("*");
        }
        printf("\n");
    }



    return 0;
}
