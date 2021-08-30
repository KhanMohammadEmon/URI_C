#include<stdio.h>
int main ()
{
    int number[]= {2,34,26,78,-89,-65,76,23,15,0};
    int n =sizeof(number)/sizeof(int);

    //printf("n: %d\n",n);

    int i,j,temp,key,index,high,low,mid;

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
   /* for(i=0; i<n; i++)
    {
        printf("%d,",number[i]);

    }
    printf("\n");*/

    low=0;
    high=n-1;


    scanf ("%d",&key);
    index = -1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if (key==number[mid])
        {
            index=mid;
            break;
        }
        if(key > number[mid])
        {
            low = mid +1;

        }
        else
        {
            high= mid-1;
        }
    }


    printf("Index: %d\n",index);


    return 0;
}

