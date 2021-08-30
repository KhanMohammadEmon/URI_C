#include<stdio.h>
int main ()
{
    int i;
    char n;
    i=1;
    while(1)
    {

    scanf("%c",&n);
    if(n!='A')
    {
        printf("Input %d: %c\n",i,n);

    }

    else
        break;
  i++;

}
    return 0;
}
