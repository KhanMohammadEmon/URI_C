#include<stdio.h>
int main ()
{
    int a,b,a1,b1,min ,hour ,n,d1,d2;
    scanf("%d %d",&a ,&b);
    scanf("%d %d",&a1 ,&b1);
    d1 = b + (a*60);
    d2 = b1 + (a1*60);
     n= d2 -d1;
     if(n > 0)
     {
     hour = n/60;
     n=  n%60;
     min = n;

     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
     }
     else
     {
     n = 1440+(d2-d1);
     hour = n/60;
     n=  n%60;
     min = n;

     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,min);
     }
     return 0 ;

}
