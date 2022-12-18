#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int y = 1;
    for (int i = 1, x = n; i <= n; i++, x--)
    {
        for (int j = 1; j < x; j++)
        {
            printf(" ");
        }

        if (i % 2 == 0)
        {
            for (int j = 1; j <= y; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 1; j <= y; j++)
            {
                printf("^");
            }
        }
        printf("\n");
        y = y + 2;
    }

    return 0;
}
