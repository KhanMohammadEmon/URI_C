#include <stdio.h>
int main()
{
    int t1 = 1, t2 = 1, nextTerm = 0, n,i;
    printf("Enter a number: ");
    scanf("%d", &n);

    //printf("%d", t1);

    //nextTerm = t1 + t2;{

    for(i=1; i<=n; ++i)
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        printf("%d,",nextTerm);
    }

    main() ;

    return 0;
}
