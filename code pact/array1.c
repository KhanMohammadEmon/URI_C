#include<stdio.h>
int main()
{
    int a[100], b[100], m, n, c, sorted[200];
    scanf("%d", &m);

    for (c = 0; c < m; c++)
    {
        scanf("%d", &a[c]);
    }

    scanf("%d", &n);

    for (c = 0; c < n; c++)
    {
        scanf("%d", &b[c]);
    }

    int j = 0;
    int k = 0;

    for (int i = 0; i < m + n;)
    {
        if (j < m && k < n)
        {
            if (a[j] < b[k])
            {
                sorted[i] = a[j];
                j++;
            }
            else
            {
                sorted[i] = b[k];
                k++;
            }
            i++;
        }
        else if (j == m)
        {
            for (; i < m + n;)
            {
                sorted[i] = b[k];
                k++;
                i++;
            }
        }
        else
        {
            for (; i < m + n;)
            {
                sorted[i] = a[j];
                j++;
                i++;
            }
        }
    }


    for (c = 0; c < m + n; c++)
    {
        printf("%d\n", sorted[c]);
    }



    return 0;
}
