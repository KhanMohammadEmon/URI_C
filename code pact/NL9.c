#include<stdio.h>
int main()
{

    int num,i,c,j,n;
    printf("Enter no. of rows : ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
        printf("Z");
    printf("\n");
   for(i=1,n=num-1; i<=num-2; i++,n--)
    {

        for(j=1; j<n; j++)
        printf(" ");
        printf("Z");
        printf("\n");
    }
    for(i=1; i<=num; i++)
        printf("Z");
    printf("\n");
    return 0;
}
