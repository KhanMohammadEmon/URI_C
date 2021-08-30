#include<stdio.h>
int main ()
{
    double salary, value, total;

    char Name;

    scanf("%s %lf %lf", &Name,&salary,&value);

    total = salary + (value*0.15);

    printf("TOTAL = R$ %.2lf\n",total);

     return 0 ;
}
