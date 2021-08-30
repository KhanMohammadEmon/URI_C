#include <stdio.h>
int main ()
{
    char number,a,A,n;
    printf("1. Smaller to Capital\n");
    printf("2. Capital to Smaller\n");
    printf("Please Choose Your Number : ");

    scanf("%c",&number);
    printf("\n");

    printf("Please Choose Your Alphabet : ");

    scanf(" %c",&n);

    if(number=='1') /// We can also Use A=n-32
    {
        A=toupper(n);
        printf("Your Final Result Is : %c\n",A);
    }
    if(number=='2') ///We can Also Use a = n+32
    {
        a = tolower(n);
        printf("Your Final Result Is : %c\n",a);
    }
    return 0;
}
