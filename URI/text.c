#include<stdio.h>
int main()
{

    int i , n , temp ,sum;
    sum = 0 ;

    scanf("%d",&n);
  for(i = 1 ; i<=n ; i =i +1)
  {
      scanf("%d" ,&temp);
      sum = sum+temp;

  }

    printf("%d\n",sum);
    return 0;
}
