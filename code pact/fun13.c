#include<stdio.h>
int main()
{
    int arr[]={2,4,6,8};
    int len =sizeof(arr)/sizeof(int);

   fun(arr,len);
    return 0;
}

int fun(int arr[],int len)
{
    for ( int i=0; i<len; i++)
    {
        printf("%d\n", 2*arr[i]);
    }
}
