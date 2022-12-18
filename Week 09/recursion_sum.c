#include "stdio.h"

int sum(int i, int n)
{
    if (i > n)
        return 0;
    int s = sum(i + 1, n);
    return s + i;
}

int main()
{
    int n;
    scanf("%d", &n);
    int s;
    s = sum(1, n);
    printf("%d", s);
    return 0;
}