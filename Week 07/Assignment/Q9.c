#include <stdio.h>

int is_prime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int total_prime(int *x, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(*x) == 1)
        {
            count++;
        }

        x++;
    }

    return count;
}

float ave_of_numbers(int *x, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += *x;
        x++;
    }
    return sum / n;
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

    int prime = total_prime(&numbers, n);
    float ave = ave_of_numbers(&numbers, n);

    printf("Prime numbers: %d\n", prime);
    printf("Average of all even integers: %0.2f", ave);
}