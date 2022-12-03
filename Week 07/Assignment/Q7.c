#include <stdio.h>

void swap(int *n, int *m)
{
    int tem = *n;
    *n = *m;
    *m = tem;
}

int main()
{
    int n, i, q, l, r;
    scanf("%d", &n);
    int numbers[n];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &q);

    for (i = 1; i <= q; i++)
    {
        scanf("%d %d", &l, &r);
        swap(&numbers[l], &numbers[r]);
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", numbers[i]);
    }
}
