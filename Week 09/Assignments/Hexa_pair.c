#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int gcd(int n, int m)
{
    int ans;
    for (int i = 1; i <= n && i <= m; i++)
    {
        if (n % i == 0 && m % i == 0)
        {
            ans = i;
        }
    }
    return ans;
}

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int n, count = 0;
        scanf("%d", &n);
        int numbers[n];
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &numbers[j]);
        }

        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {

                if (j != k)
                {
                    int a = gcd(numbers[j], numbers[k]);
                    if (a == 1)
                        count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
