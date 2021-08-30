#include<stdio.h>
int main()
{
    int A[100][100];
// int B[100];
// int C[100];

    int a,b,i,j,sum=0;

    scanf("%d",&a);
    printf("");
    scanf("%d",&b);

    for (i=0; i<a; i++)
    {
        for (j=0; j<b ; j++ )
        {
            scanf("%d",&A[i][j]);
             sum+= A[i][j];
        }
    }
    printf("............\n");

//    for (i=0; i<a; i++)
//    {
//        printf("\n");
//        for (j=0; j<b ; j++ )
//        {
//            printf("%d\t",A[i][j]);
//        }
//    }
    printf("%d",sum);


    return 0;
}
