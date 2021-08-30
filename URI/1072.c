#include<stdio.h>
int main ()
{
    int N ,X ,i, sum, out;

    scanf("%d",&N);
      sum = 0;

    for(i=1 ; i<= N ;i = i+1)
    {

        scanf("%d",&X);

        if(10 <= X && X <= 20)
        {
            sum = sum + 1;
        }

    }
     printf("%d in\n",sum);
    out = N - sum ;
    printf("%d out\n",out);

     return 0 ;

}
