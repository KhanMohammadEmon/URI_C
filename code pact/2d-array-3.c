#include<stdio.h>
int main()
{
 int array[100][100];
 int array1[100][100];

 int i ,j ,n,m,sum;

 scanf("%d %d",&n,&m);

 for (i=0;i<n ;i++ )
   {
     for (j=0;j<m ;j++ )
       {
         scanf("%d",&array[i][j]);
       }
   }

   for (i=0;i<n ;i++ )
   {
     for (j=0;j<m ;j++ )
       {
         scanf("%d",&array1[i][j]);
       }
   }
   printf("\n==============================\n\n");

   for (i=0;i<n ;i++ )
   {
     for (j=0;j<m ;j++ )
       {
         sum=array[i][j]+array1[i][j];
         printf("%d\t",sum);
       }
       printf("\n");
   }

return 0;
}
