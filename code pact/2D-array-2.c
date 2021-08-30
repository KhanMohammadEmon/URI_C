#include<stdio.h>
int main()
{
    int array[100][100];
    int array1[100][100];    ///i=row ; j=col;
    int i,j,n,symmetric;

///input a size

    scanf("%d",&n);

///input matrix
    for (i=0; i<n ; i++ )
    {
        for (j=0; j<n ; j++ )
        {
            scanf("%d",&array[i][j]);
        }
    }

    ///find transpose matrix
    for (i=0; i<n ; i++ )
    {
        for (j=0; j<n ; j++ )
        {
            array1[i][j]=array[j][i];
        }
    }

    symmetric=1;
    for (i=0; i<n ; i++ )
    {
        for (j=0; j<n ; j++ )
        {
            if(array[i][j]!=array1[i][j])
            {
                symmetric=0;
                break;
            }
        }
    }

    if(symmetric==1)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}
