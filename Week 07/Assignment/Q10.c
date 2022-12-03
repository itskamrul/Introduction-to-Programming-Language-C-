#include <stdio.h>
#include <math.h>

int is_beautiful(int n, int *arr)
{
    int count = 0, i, x;
    for (i = 0; i < n; i++)
    {
        int m = *arr;
        while (m > 0)
        {
            x = m % 10;
            if (x == 7)
            {
                count++;
                break;
            }
            else
                m = m / 10;
        }
        arr++;
    }

    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int x = is_beautiful(n, &numbers);
    double y = ceil(n * 1.0 / 2);
    if (y <= (x * 1.0))
    {
        printf("Beautiful");
    }
    else
        printf("Ugly");
}