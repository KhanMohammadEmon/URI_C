#include <stdio.h>
int main ()
{

   int i,n,rat,frog,rabbit,count,total;
   char text;

    scanf("%d",&n);

    rat = 0;
    rabbit=0;
    frog=0;


    for(i = 1; i <= n ; i = i + 1)
    {
        scanf("%d %c",&count,&text);

        if(text == 'R')
        {
            rat = rat + count;
        }
        else if (text == 'C')
        {
            rabbit = rabbit + count ;
        }
        else if (text == 'S')
        {
            frog = frog + count ;
        }
    }
    total = rabbit + rat + frog  ;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2f %%\n",((float)rabbit/total)*100);
    printf("Percentual de ratos: %.2f %%\n",((float)rat/total)*100);
    printf("Percentual de sapos: %.2f %%\n",((float)frog/total)*100);

   return 0 ;
}
