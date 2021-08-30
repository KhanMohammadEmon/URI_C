#include<stdio.h>
int main ()
{
    int i,j,k=7;
    for(i=1;i<=9;i=i+2)
    {
        for(j=1;j<=3;j=j+1)
        {
            printf("I=%d J=%d\n",i,k);
            k=k-1;
        }
        k = k+5;
    }
    return 0 ;
}
