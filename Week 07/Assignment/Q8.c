#include <stdio.h>
#include <string.h>

void twice_func(int n, char arr[])
{
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%c%c", arr[i - 1], arr[i - 1]);
        else
            printf("%c", arr[i - 1]);
    }
}

int main()
{
    char arr[27];
    scanf("%s", &arr);
    int len = strlen(arr);
    twice_func(len, arr);
}