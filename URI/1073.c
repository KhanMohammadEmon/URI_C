#include<stdio.h>
int main ()
{
    int N ,i ;
    scanf("%d",&N);

    for( i=1; i<=N ; i= i+1)
    {
        if(i%2==0)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
    }
return 0 ;
}
