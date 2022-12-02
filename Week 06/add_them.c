#include <stdio.h>

int add_them(int n, int arr[])
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[10] = {38, 56, 234, 23, 53, 91, 5321, 23, 434};
    int sum = add_them(9, arr);
    printf("sum is = %d", sum);
    return 0;
}