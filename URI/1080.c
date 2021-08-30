#include<stdio.h>
int main ()
{
    int n,i,max,possition;
    max = 0;
    for(i=1;i<=100;i=i+1)
    {
     scanf("%d",&n);
     if(max<n)
     {
         max = n;
         possition = i;
     }
    }
    printf("%d\n",max);
    printf("%d\n",possition);

    return 0;
}
