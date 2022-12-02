#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int t, x, i, j;
    char c;
    scanf("%d", &t);
    int minutes[105];

    for (i = 1; i <= t; i++)
    {
        minutes[i] = 0;
    }

    for (i = 1; i <= t; i++)
    {
        scanf("%d%c", &x, &c);
        for (j = x; j < 100; j++)
        {
            if (j < 60)
            {
                minutes[i] = minutes[i] + 1;
            }
            else if (j >= 60 && j < 80)
            {
                minutes[i] = minutes[i] + 2;
            }
            else if (j >= 80 && j < 100)
            {
                minutes[i] = minutes[i] + 3;
            }
        }
    }

    for (i = 1; i <= t; i++)
    {
        printf("%d\n", minutes[i]);
    }

    return 0;
}
