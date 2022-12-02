#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i, j;
    long long int n, sum = 0;
    scanf("%lld", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum += 1;
        }
    }
    printf("%lld", sum);

    return 0;
}
