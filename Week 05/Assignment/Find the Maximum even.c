#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, j, count1 = 0, count2 = 0;
    scanf("%d", &n);
    long long int arr[21], a, odd = 0, even = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {

        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {

            if (count1 == 2)
                continue;
            else
            {
                odd += arr[i];
                count1++;
            }
        }
        else
        {

            if (count2 == 2)
                continue;
            else
            {
                even += arr[i];
                count2++;
            }
        }
        if (count1 == 2 && count2 == 2)
        {
            break;
        }
    }

    if (odd > even)
    {
        printf("%lld", odd);
    }
    else
    {
        printf("%lld", even);
    }

    return 0;
}
