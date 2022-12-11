#include "stdio.h"

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    printf("The maximum value is: %d", max);
    return 0;
}