#include<stdio.h>
int main()
{
    int array[100];
    int i,j,n,temp;

    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }


    }
    for(i=0; i<n; i++)
    {
        printf("%d ",array[i]);
    }

    return 0;
}
