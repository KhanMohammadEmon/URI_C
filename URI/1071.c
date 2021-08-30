#include<stdio.h>
int main ()
{
  int X ,Y, i , sum;

  scanf("%d %d", &X ,&Y)  ;

  sum = 0;

  for(i=Y+1 ; i < X ; i = i +1 )
  {
      if(i % 2 !=0)
      {
       sum = sum + i;
      }
  }
    printf("%d\n",sum);

  return 0 ;
}
