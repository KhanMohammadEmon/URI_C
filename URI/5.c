#include<stdio.h>
int main ()
{
    int P1,NP1,P2,NP2;
    float PP1,PP2,VP;

    scanf("%d %d %f",&P1,&NP1,&PP1);

    scanf("%d %d %f",&P2,&NP2,&PP2);

   VP = (NP1*PP1)+(NP2*PP2);

    printf("VALOR A PAGAR: R$ %.2f\n",VP);

    return 0;
}
