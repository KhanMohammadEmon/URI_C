#include <stdio.h>


int main()
{
    int i;
    char ch;
    ch ='a';

    for(i=0;ch!='q'; i++)
    {
        printf("Pass: %d\n",i);
        ch = getche();
    }
    return 0;
}
