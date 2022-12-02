#include <stdio.h>
#include <string.h>

int isBinary(int n, char string[])
{
    int i, flag = 1;
    for (i = 0; i < n; i++)
    {
        if (string[i] != '0' && string[i] != '1')
        {
            return flag = 0;
        }
    }
    return flag;
}

int main()
{
    char arr[100];
    scanf("%s", arr);
    int len = strlen(arr);
    int tem = isBinary(len, arr);

    if (tem == 1)
        printf("Yes");
    else
        printf("No");
}