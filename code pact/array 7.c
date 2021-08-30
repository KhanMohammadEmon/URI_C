#include<stdio.h>
int main ()
{
    int number[]= {0,-1,-12,-45,67,-8,9,34,23,45,78,75,-89};
    int low,high,i,j,index,mid,n,temp,key;
    n= sizeof(number)/sizeof(int);

    low = 0;

    high = n-1;

    for(i=n-1; i>=0; i--)
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
    printf("\nEnter any Number:");

    scanf("%d",&key);
    index=-1;
    while(low<=high)
    {
       mid=(low+high) /2;
       if(key==number[mid])
       {
           index = mid;
           break;

       }
       if(key>number[mid])
       {
           low=mid+1;
       }
       else
        high=mid-1;
    }
    printf("Index : %d\n",index);
    main ();

    return 0;
}
