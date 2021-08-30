#include<stdio.h>
int main ()
{
    int count[21]={0};
    int i,n;
    for(;;)
    {
        printf("please enter number : ");
        scanf("%d",&n);
        if(n==0)
            break;
        //count[n]++;
    }
    i=1;
    while(i<=20)
    {
        if(count[i]!=0)
            printf("NO. %ds Is: %d\n",i,count[i]);
        i++;
    }

    return 0;
}
