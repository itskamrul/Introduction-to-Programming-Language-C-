#include <stdio.h>
#include <string.h>

int checkNum(int n, char arr[], char com)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == com)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    char arr[100];
    scanf("%s", &arr);
    int len = strlen(arr);

    char test_arr[3] = {'1', '7', '9'};
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        int check = checkNum(len, arr, test_arr[i]);
        if (check == 1)
        {
            count++;
        }
    }

    if (count == 3)
        printf("Yes");
    else
        printf("No");

    return 0;
}