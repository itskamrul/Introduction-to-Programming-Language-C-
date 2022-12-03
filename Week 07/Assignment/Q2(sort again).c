#include <stdio.h>
#include <string.h>

void sort_again(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                char tem = arr[i];
                arr[i] = arr[j];
                arr[j] = tem;
            }
        }

        printf("%c", arr[i]);
    }
}

int main()
{
    char arr[1001];

    scanf("%s", arr);
    int len = strlen(arr);
    sort_again(arr, len);

    return 0;
}