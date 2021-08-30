#include<stdio.h>
int three(int a,int b,int c);
int main()
{
 int a,b,c,ans;
 scanf("%d %d %d",&a,&b,&c);
 ans =three(a,b,c);
 printf("Sum in Main: %d",ans);

return 0;
}
int three(int a ,int b, int c)
{
    return a+b+c;
}
