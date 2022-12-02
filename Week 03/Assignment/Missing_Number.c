#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int dif = 0, T, S, A, B, C, i;
    scanf("%d", &T);
    int arr[101];
    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &S, &A, &B, &C);
        dif = S - (A + B + C);
        arr[i] = dif;
    }
    for (i = 0; i < T; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
