#include<stdio.h>
int main()
{
 int pos , i,n;
 pos= 0;
 for (i = 0; i < 5; i=i+1)
 {
  scanf("%d", &n);
  if(n % 2 == 0)
    {
      pos = pos + 1;

    }
 }

 printf("%d valores pares\n", pos);


 return 0;
}
