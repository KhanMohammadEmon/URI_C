#include<stdio.h>
int main()
{
 int array[100];
 int i,j,n;

 scanf("%d",&n);

  for (i=0;i<n;i++)
    {
      scanf("%d",&array[i]);
    }
    printf("Array A : ");
  for (i=0;i<n;i++)
    {
      printf("%d ",array[i]);
    }
    printf("\n\nArray B : ");

     for(i=n-1; i>=0; i--)
    {
        printf("%d ", array[i]);
    }
 return 0;
}
