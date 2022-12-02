#include <stdio.h>

int main()
{
    int mat[3][3], i;

    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", mat[j][i]);
        }
        printf("\n");
    }
}