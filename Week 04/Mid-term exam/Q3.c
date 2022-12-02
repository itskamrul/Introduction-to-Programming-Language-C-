#include <stdio.h>
int main()
{
    int n = 15, i;
    int arr[n];

    for (i = 1; i <= n; i++)
    {
        if (i < 2)
            arr[i] = i;
        else
            arr[i] = arr[i - 1] * 2;
    }
    for (i = 1; i <= n; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}
