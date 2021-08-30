#include<stdio.h>
char receive(char x);
int main()
{
 char x;
 scanf("%c",&x);
 receive(x);
return 0;
}
char receive(char x)
{
    printf("Value received from main : %c",x);
}
