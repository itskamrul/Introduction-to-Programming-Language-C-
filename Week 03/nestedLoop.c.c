#include <stdio.h>
int main()
{
    // int i,j,k;
    // int n;
    // scanf("%d",&n);
    // printf("#\n");
    // for ( i = 1; i <= n; i++)
    // {
    //     printf("#");
    //     for ( j = 1; j <=i; j++)
    //     {
    //         printf(" ");

    //     }
    //      printf("#");
    //     printf("\n");

    // }
    // for ( i = 1; i <=n+3; i++)
    // {
    //     printf("#");
    // }

    int arr[3] = {1, 2, 3}, i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            printf("%d ", arr[j]);
        }
    }
}