#include<stdio.h>
int main ()
{
   int number[]={1,2,3,4,5,6,-1,2,-3} ;
   int i;
    for(i=1;i<=21;i++)
    {
        if(number[i]<0)
        printf("%d\n",number[i]);
    }

    return 0;
}
