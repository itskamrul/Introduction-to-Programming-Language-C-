#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sum = 0;
    char arr[22];
    fgets(arr, sizeof(arr), stdin);
    scanf("%d %d", &a, &b);
    int len = strlen(arr) - 1;
    for (int i = 0; i <= len; i++)
    {
        if (arr[i] == '+')
        {
            sum += a + b;
        }
        else if (arr[i] == '*')
        {
            sum += a * b;
        }
    }

    printf("%d", sum);

    return 0;
}