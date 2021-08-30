#include<stdio.h>
int main ()
{
    int number[]={2,34,26,78,-89,-65,76,23,15,0};
    int n =sizeof(number)/sizeof(int);

    printf("n: %d\n",n);

    int i,key , index;

    scanf ("%d",&key);
    index = -1;
    for(i=0;i<n;i++)
    {
        if(number[i]==key)
        {
            index=i;
            break;
        }
    }

   printf("Index: %d\n",index);
   main ();

    return 0;
}
