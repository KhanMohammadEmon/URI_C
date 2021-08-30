#include<stdio.h>
int main()
{
 double n,avg,sum;
 int pos , i;
 pos= 0;
sum = 0;
 for (i = 0; i < 6; i=i+1)
 {
  scanf("%lf", &n);
  if(n > 0)
    {
      pos = pos + 1;

      sum = sum + n;
    }
 }

 printf("%d valores positivos\n", pos);

 avg =sum / pos;

 printf("%.1lf\n",avg);

 return 0;
}

