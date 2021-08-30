#include<stdio.h>
int array();
int main()
{
    int arr[]= {12, 45 ,1 ,10 ,5 ,3 ,22, 7};
    int len =sizeof(arr)/sizeof(int);

    int min=array(arr,len);
    printf("Minimum Value: %d",min);
    return 0;
}
int array(int arr[],int len)
{
    for (int i=0; i<len; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        printf("%d\n",arr[i]);
        return arr[i];
    }


}
