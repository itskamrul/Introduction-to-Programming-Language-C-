#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int x;
    scanf("%d", &x);

    if (x % 400 == 0)
        printf("Yes");

    else if (x % 4 == 0 && x % 100 != 0)
        printf("Yes");

    else
        printf("No");

    return 0;
}
