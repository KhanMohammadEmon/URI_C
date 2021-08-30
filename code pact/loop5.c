#include<stdio.h>
int main ()
{
    int i;
    char s;
    for (i=1;;i++)
    {
        scanf("%c",&s);
        if(s!='A')
        {
            printf("Input %d:",i);
            printf("%c\n",s);
        }
        else
        {
            break;
        }
    }
    return 0;
}
