
#include<stdio.h>
int main()
{
 int pos,even, odd ,neg , i,n;
 pos= 0;
 even= 0;
 odd= 0;
neg= 0;
 for (i = 0; i < 5; i=i+1)
 {
  scanf("%d", &n);
  if(n % 2 == 0)
    {
      even = even + 1;

    }
    if(n % 2 != 0)
    {
      odd =odd + 1;

    }
    if(n > 0)
    {
      pos = pos + 1;

    }
    if(n < 0)
    {
      neg = neg + 1;

    }

 }

 printf("%d valor(es) par(es)\n",even);



 printf("%d valor(es) impar(es)\n",odd);



 printf("%d valor(es) positivo(s)\n", pos);


 printf("%d valor(es) negativo(s)\n", neg);

 return 0;
}
