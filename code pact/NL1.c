#include<stdio.h>
int main ()
{
    int number,i,j;
    printf("Enter a Number : ");
    scanf("%d",&number);

    for(i=1;i<=number;i++)
    {
        for(j=1;j<=number;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    main ();

    return 0;
}
