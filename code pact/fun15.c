#include <stdio.h>
int IsPrime(int num);
int main()
{
    int i, num;

    printf("Enter any number to check prime: ");
    scanf("%d",&num);

    int ans=IsPrime(num);

    if(ans==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}

int IsPrime(int num)
{
    int i,isPrime;


    isPrime = 1;

    for(i=2; i<=num/2; i++)
    {
        if(num%i==0)
        {

            isPrime = 0;

            break;
        }
    }


    if(isPrime == 1 && num > 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }


}
