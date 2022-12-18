#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);

    for (int j = 1; j <= t; j++)
    {
        int n, x;
        scanf("%d", &n);
        int numbers[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &numbers[i]);
        }
        scanf("%d", &x);

        int c = 0;
        for (int i = 1; i <= n; i++)
        {
            if (numbers[i] == x)
            {
                c = i;
                break;
            }
        }
        if (c != 0)
            printf("Case %d: %d\n", j, c);
        else
            printf("Case %d: Not Found\n", j);
    }

    return 0;
}
