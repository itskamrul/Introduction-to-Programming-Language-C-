#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        while (n > 0)
        {
            int x = n % 10;
            n = n / 10;
            printf("%c", 'A' + x - 1);
        }
        printf("\n");
    }

    return 0;
}
