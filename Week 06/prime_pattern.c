#include <stdio.h>

int isPrime(int x)
{
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int pattern(int n, int m)
{
    int j = 1;

    while (j <= n)
    {
        if (isPrime(m) == 1)
        {
            printf("%d ", m);
            j++;
        }
        m++;
    }
    printf("\n");
    return m;
}

int main()
{
    int n, i, m = 2;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        m = pattern(i, m);
    }
}