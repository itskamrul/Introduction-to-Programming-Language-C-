#include <stdio.h>

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

float ratio(int n, int m)
{
    float r = (factorial(n) * 1.0) / factorial(m);
    return r;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    float r = ratio(x, y);
    printf("%0.2f", r);

    return 0;
}
