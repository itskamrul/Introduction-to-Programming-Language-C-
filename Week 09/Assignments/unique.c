#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isUnique(char arr[], char c, int n)
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == c && i != n)
            return 0;
    }
    return 1;
}

int main()
{

    int n, count = 0;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", &arr);

    for (int i = 0; i < n; i++)
    {
        if (isUnique(arr, arr[i], i) == 1)
            count++;
    }
    printf("%d", count);

    return 0;
}
