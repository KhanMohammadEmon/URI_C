#include<stdio.h>
void greet();
int main()
{
    int n;
    scanf("%d",&n);
    greet(n);
    return 0;
}
void greet(int n)
{
    for (int i=1; i<= n; i++)
    {
        printf("Hello\n");
    }
}
