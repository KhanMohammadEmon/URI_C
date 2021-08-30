#include<stdio.h>
int main()
{
    int i,n;
    float avg,b,sum=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%f",&b);
        sum = sum+b;

    }
    avg = sum/n;
    printf("AVG of %d inputs: %.6f",n,avg);
    return 0;
}
