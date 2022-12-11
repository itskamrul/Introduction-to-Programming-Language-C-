#include "stdio.h"
#include "stdlib.h"

int main()
{
    int n;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Enter the values of array:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("\nThe values in the array are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);
}