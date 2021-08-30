#include<stdio.h>
int main ()
{
    int number[]= {-89,-65,0,2,15,23,26,34,76,78};
    int n =sizeof(number)/sizeof(int);///whose numbers are input in the array find.

    // printf("n: %d\n",n);

    int i,key, index,high,low,mid;
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
    main ();

    return 0;
}
