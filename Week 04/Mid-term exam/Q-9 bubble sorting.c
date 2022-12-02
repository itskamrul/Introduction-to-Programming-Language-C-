#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int a, i, j;
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for (i = 0; i < 5; i++)
    {

        for (j = i + 1; j < 11; j++)
        {
            if (arr[i] > arr[j])
            {
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
            }
        }
    }

    for (i = 0; i < 11; i++)
    {
        printf("%d, ", arr[i]);
    }

    return 0;
}