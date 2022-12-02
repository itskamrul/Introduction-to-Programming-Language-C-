#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j;
    scanf("%d %d", &n, &m);
    int arr[101][101];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            if (i == arr[i][j] && j == arr[i][j])
            {
                arr[i][j] += 3;
            }
            else if (i == arr[i][j])
            {
                arr[i][j] += 2;
            }
            else if (j == arr[i][j])
            {
                arr[i][j] += 1;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}