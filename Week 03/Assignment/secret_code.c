#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, i, j;
    long long int n;
    scanf("%d", &t);
    int ans[100001];

    for (i = 1; i <= t; i++)
    {
        scanf("%lld", &n);
        if (n == 2)
        {
            ans[i] = 1;
        }
        else
        {
            for (j = 2; j < n; j++)
            {

                if (n % j == 0)
                {
                    ans[i] = 0;
                    break;
                }
                else
                {
                    ans[i] = 1;
                }
            }
        }
    }

    for (i = 1; i <= t; i++)
    {
        if (ans[i] == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}