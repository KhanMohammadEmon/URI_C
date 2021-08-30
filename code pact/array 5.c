#include<stdio.h>
int main ()
{
    int number[]= {2,34,26,78,-89,-65,76,23,15,0};
    int n =sizeof(number)/sizeof(int);

    //printf("n: %d\n",n);

    int i,j,temp;

    //scanf ("%d",&key);
    // index = -1;
    for(i=n-1; i>=1; i--)
    {
        for(j=0; j<i; j++)
        {

            if(number[j]>number[j+1])
            {
                temp=number[j];
                number[j]=number[j+1];
                number[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d,",number[i]);

    }
    printf("\n");

    return 0;
}
