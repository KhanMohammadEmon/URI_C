#include <stdio.h>

int main()
{
    int arr[100];
    int size, i,sum=0;

    /* Input size of array */
    printf("Enter size of the array: ");
    scanf("%d",&size);

    /* Input array elements */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
           sum=sum+arr[i];
        }

    }

    printf("%d",sum);

    return 0;
}
