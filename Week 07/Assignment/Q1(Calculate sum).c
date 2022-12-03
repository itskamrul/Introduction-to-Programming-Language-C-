#include <stdio.h>

int main()
{
    int i, n, sum = 0, count = 0;
    ;
    scanf("%d", &n);
    char c = '+';
    for (i = 1; i <= n; i++)
    {
        if (c == '+')
        {
            sum += i;
            count++;
            if (count == 3)
            {
                c = '-';
                count = 0;
                continue;
            }
        }
        if (c == '-')
        {
            sum -= i;
            count++;
            if (count == 3)
            {
                c = '+';
                count = 0;
            }
        }
    }

    printf("%d", sum);

    return 0;
}