#include <stdio.h>

int find_mid(int len, int numbers[])
{
    for (int i = 1; i < len; i++)
    {
        for (int j = i; j < len; j++)
        {
            if (numbers[i] > numbers[j])
            {
                int tem = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = tem;
            }
        }
    }

    int mid_len = len / 2;

    if (len % 2 == 0)
        return (numbers[mid_len] + numbers[mid_len + 1]) / 2;
    else
        return numbers[mid_len + 1];
}

int main()
{
    int n, i;
    printf("Enter array size: ");
    scanf("%d", &n);
    int nums[n];

    printf("Enter array: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &nums[i]);
    }

    int mid = find_mid(n, nums);
    printf("the Median of numbers is = %d", mid);
}