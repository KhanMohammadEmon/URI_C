
#include <stdio.h>
int IsPrime(int i)
{
    int j,isprime;
    for(j=2; j<=i/2; j++)
        {

            if(i%j==0)
            {
                isprime = 0;
                return  isprime;
            }
        }

}

int GeneratePrime(int n)
{
    int i,j,isprime;
   printf("Prime lass than %d: ",n);

    for(i=2; i<n; i++)
    {

       isprime = IsPrime(i);

        if(isprime!=0)
        {
            printf("%d, ", i);
        }
    }

}


int main()
{
    int i, j,n;
    printf("Enter Number: ");
    scanf("%d", &n);
   GeneratePrime(n);

    return 0;
}
