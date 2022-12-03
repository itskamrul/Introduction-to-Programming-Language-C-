#include <stdio.h>

int sum_of_nums(int n, int arr[])
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 == 0)
            sum = sum + i + arr[i];
        else if (i % 2 != 0 && arr[i] % 2 != 0)
            sum = sum + i + arr[i];
    }
    return sum;
}

int main()
{
    int n, sum;
    scanf("%d", &n);
    int numbers[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    printf("%d", sum_of_nums(n, numbers));
}