#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    for (i = 2; i < n; i++)
    {
        printf("%d", i);
        for (j = 1; j < n - 1; j++)
        {
            printf(" ");
        }
        printf("%d", n);
        printf("\n");
    }
    if (n != 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d", n);
        }
    }

    return 0;
}
