#include <stdio.h>
int main()
{
    int i, j, k, sum, sum_arr[10];
    int arr[3][3];

    // input 2d(3x3) array
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // total of rows
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
        sum_arr[i] = sum;
    }

    // total of fast corner

    sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum += arr[i][i];
    }
    sum_arr[3] = sum;

    // total of colums
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += arr[j][i];
        }
        sum_arr[i + 4] = sum;
    }

    // total of second corner
    sum = 0;
    int count = 0;
    for (i = 2; i >= 0; i--)
    {
        sum += arr[count][i];
        count++;
    }
    sum_arr[7] = sum;

    // output
    int flag = 1;
    for (i = 0; i < 7; i++)
    {
        if (sum_arr[i] != sum_arr[i + 1])
        {
            flag = 0;
            // break;
        }
    }
    if (flag == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}