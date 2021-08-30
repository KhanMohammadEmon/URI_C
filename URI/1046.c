#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d",&a , &b);

   if (a >= b)
   {
       c = (b+24) - a;
       printf("O JOGO DUROU %d HORA(S)\n",c);

   }
   else
   {
       c = b - a ;
       printf("O JOGO DUROU %d HORA(S)\n",c);
   }
   return 0 ;
}
