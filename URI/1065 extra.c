#include<stdio.h>
int main ()
{
    int pos, b ,c ,d,e,f;
    pos = 0;
 scanf("%d %d %d %d %d" , &b ,&c , &d, &e ,&f);


     if(b>0)
    {
        pos = pos +1;

    }
     if(c>0)
    {
        pos = pos +1;

    }
     if(d>0)
    {
        pos = pos +1;

    }
     if(e>0)
    {
        pos = pos +1;

    }
     if(f>0)
    {
        pos = pos +1;

    }
     printf("%d valores pares\n",pos);


    return 0 ;
}
