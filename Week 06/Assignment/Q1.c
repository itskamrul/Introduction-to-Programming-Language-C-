#include <stdio.h>
#include <string.h>

int main()
{
    int i, len;
    char arr[100];
    scanf("%s", &arr);
    len = strlen(arr);
    for (i = 0; i < len; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
            printf("%c", arr[i] + 32);
        else
            printf("%c", arr[i] - 32);
    }
}