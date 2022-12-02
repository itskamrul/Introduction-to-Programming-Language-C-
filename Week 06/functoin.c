#include <stdio.h>

int max_of_number(int x, int y, int z);

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int m;
    m = max_of_number(a, b, c);
    printf("The max value is %d", m);

    return 0;
}

int max_of_number(int x, int y, int z)
{
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
        return y;
    else
        return z;
}