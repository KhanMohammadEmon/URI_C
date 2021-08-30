#include<stdio.h>
int main()
{
 double n;
 int pos , i;
 pos= 0;

 for (i = 0; i < 6; i=i+1)
 {
  scanf("%lf", &n);
  if(n > 0)
    {
      pos = pos + 1;

    }
 }

 printf("%d valores positivos\n", pos);


 return 0;
}

