#include <stdio.h>

int divisible_by_3(int n, int *arr);
int divisible_by_5(int n, int *arr);

int main()
{
    int n;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int count_3 = divisible_by_3(n, &numbers);
    int count_5 = divisible_by_5(n, &numbers);

    if (count_3 + count_5 == 0)
        printf("%d", -1);
    else
        printf("%d", count_3 + count_5);

    return 0;
}

int divisible_by_3(int n, int *arr)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*arr % 3 == 0)
        {
            count++;
            *arr = 2;
        }
        arr++;
    }
    return count;
}

int divisible_by_5(int n, int *arr)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*arr % 5 == 0)
        {
            count++;
            *arr = 2;
        }
        arr++;
    }
    return count;
}