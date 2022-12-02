#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, a, i, j;
    scanf("%d", &n);
    int marks[105];
    int marks2[105];
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &marks[i]);
        marks2[i] = marks[i];
    }

    for (i = 1; i <= n; i++)
    {

        for (j = i + 1; j <= n; j++)
        {
            if (marks[i] > marks[j])
            {
                a = marks[i];
                marks[i] = marks[j];
                marks[j] = a;
            }
        }
    }

    for (i = 1; i <= n; i++)
    {
        printf("%d ", marks[n] - marks2[i]);
    }

    return 0;
}