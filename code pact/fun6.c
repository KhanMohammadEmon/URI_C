#include<stdio.h>
void greet();
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    greet(n,m);
    return 0;
}
void greet(int n ,int m)
{
    for (int i=n; i<= m; i++)
    {
        printf("Hello %d\n",i);
    }
}
