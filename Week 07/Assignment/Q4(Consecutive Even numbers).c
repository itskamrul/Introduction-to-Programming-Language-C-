#include <stdio.h>

void ans(int x)
{
    int a = (x - 12) / 4;
    printf("%d %d %d %d\n", a, a + 2, a + 4, a + 6);
}

int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        scanf("%d", &n);
        ans(n);
    }

    return 0;
}