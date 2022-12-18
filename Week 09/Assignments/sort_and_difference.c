#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (arr1[i] > arr1[j])
            {
                int tem = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tem;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i; j < n; j++)
        {
            if (arr2[i] < arr2[j])
            {
                int tem = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = tem;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i] - arr2[i]);
    }

    return 0;
}
