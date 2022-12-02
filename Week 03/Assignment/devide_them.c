#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, k, i, roll[25];
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &roll[i]);
    }
    scanf("%d", &k);

    for (i = k + 1; i <= n; i++)
    {
        printf("%d ", roll[i]);
    }
    for (i = 1; i <= k; i++)
    {
        printf("%d ", roll[i]);
    }

    return 0;
}
