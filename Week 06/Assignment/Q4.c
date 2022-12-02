#include <stdio.h>

int main()
{
    int n, x;
    scanf("%d %d", &n, &x);
    int numbers[n], index = 1;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            numbers[index] = i;
            index++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            numbers[index] = i;
            index++;
        }
    }

    for (int i = 1; i < index; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\nThe %dth element in this sequence is %d.", x, numbers[x]);
}