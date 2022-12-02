#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, count2 = 0, count = 1;
    scanf("%d", &n);
    char arr[101];

    for (i = 0; i <= n; i++)
    {
        scanf("%c", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            count++;
            if (count >= count2)
            {
                count2 = count;
            }
        }
        else
        {
            if (count >= count2)
            {
                count2 = count;
            }

            count = 1;
        }
    }

    if (n == 1)
        printf("%d", 1);
    else
        printf("%d", count2);

    return 0;
}