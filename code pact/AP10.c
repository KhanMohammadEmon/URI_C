#include<stdio.h>
int main()
{
 int array[100],array1[100];
 int i,j,n,m,temp;

 scanf("%d",&n);
 for (i=0;i<n;i++)
   {
     scanf("%d",&array[i]);
   }
 scanf("%d",&m);
  for (i=0;i<m;i++)
   {
     scanf("%d",&array1[i]);
   }
   ///swap
   for (i=0;i<n;i++)
     {
       temp=array[i];
      array[i]=array1[i];
       array1[i]=temp;

     }

  printf("Array A: ");

   for (i=0;i<m;i++)
   {
     printf("%d ",array[i]);
   }

   printf("\n\nArray B: ");

   for (i=0;i<n;i++)
   {
     printf("%d ",array1[i]);
   }

return 0;
}
