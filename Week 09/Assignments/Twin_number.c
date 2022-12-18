#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, s;
    scanf("%d %d", &n, &s);
    for (int i = 0; i < s; i++)
    {
        if (n + (i * 2) == s)
        {
            printf("%d", i);
            return 0;
        }
    }

    return 0;
}
