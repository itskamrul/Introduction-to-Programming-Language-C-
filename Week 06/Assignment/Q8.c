#include <stdio.h>
#include <string.h>
int main()
{
    int n, i, len;
    char arr[100];
    scanf("%s", &arr);
    scanf("%d", &n);
    len = strlen(arr);

    for (i = 0; i < len; i++)
    {
        if (arr[i] + n > 'z')
        {
            int tem = 'z' - arr[i];
            int tem2 = n - (tem + 1);
            printf("%c", 'a' + tem2);
        }

        else
            printf("%c", arr[i] + n);
    }

    return 0;
}