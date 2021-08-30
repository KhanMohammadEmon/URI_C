#include<stdio.h>

int fun(int arr[],int n)
{
    int i,j,temp;

        for(i=n-1; i>=0; i--)
    {
        for(j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }


    }
    for(i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

      return 0;
}


int main()
{
    int n;
    int arr[100];
    scanf("%d",&n);


    for (int i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);
      }
  fun(arr,n);
    return 0;
}

