#include <stdio.h>
int main()
{
    char arr[100];
    fgets(arr, sizeof(arr), stdin);
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] += 32;
        }
    }
    puts(arr);
}