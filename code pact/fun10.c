#include<stdio.h>
int swap(int x,int y)
{
    int temp=x;
    x=y;
    y=temp;
    printf("Value in func: %d %d\n",x,y);
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    swap(x,y);
    printf("Value in main: %d %d\n",x,y);
    return 0;
}
