#include <stdio.h>
int main()
{
    int arr[100];
    int i, max, min, size,index,index1;

    scanf("%d", &size);

    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    max = arr[0];
    min = arr[0];


    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    for(i=0; i<size; i++)
    {
        if(arr[i]==max)
            index=i;
    }
    for(i=0; i<size; i++)
    {
        if(arr[i]==min)
            index1=i;
    }

    printf("Max: %d   Index: %d\n", max,index);
    printf("Min: %d   Index: %d\n", min,index1);

    return 0;
}
