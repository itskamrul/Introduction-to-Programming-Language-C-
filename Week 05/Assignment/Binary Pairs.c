#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, n, i, j, count;
    scanf("%d", &t);
    char arr[1001];
    int count_arr[101];
    for (i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        count = 0;
        for (j = 0; j <= n; j++)
        {
            scanf("%c", &arr[j]);
        }

        for (j = 1; j < n; j++)
        {
            if (arr[j] == '0' && arr[j + 1] == '1')
            {
                count++;
            }
            else if (arr[j] == '1' && arr[j + 1] == '0')
            {
                count++;
            }
        }

        count_arr[i] = count;
    }

    for (i = 1; i <= t; i++)
    {
        printf("%d\n", count_arr[i]);
    }

    return 0;
}
