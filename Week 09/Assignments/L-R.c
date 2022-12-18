#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int l, r;
        scanf("%d %d", &l, &r);

        for (int i = l; i <= r; i++)
        {
            if (i == 1)
            {
                printf("%d ", i);
                continue;
            }

            if (isPrime(i) == 1)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
