#include "stdio.h"

int main()
{
    int n, x = 0, y = 1;
    scanf("%d", &n);
    printf("%d, %d", x, y);
    for (int i = 1; i < n - 1; i++)
    {
        printf(", %d", x + y);
        int tem = x;
        x = y;
        y = tem + y;
    }
}