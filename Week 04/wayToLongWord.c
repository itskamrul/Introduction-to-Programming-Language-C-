#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1001];
    fgets(arr, sizeof(arr), stdin);
    int l = strlen(arr) - 1;
    if (l > 10)
    {
        printf("%c%d%c", arr[0], l - 2, arr[l - 1]);
    }
    else
    {
        puts(arr);
    }
}