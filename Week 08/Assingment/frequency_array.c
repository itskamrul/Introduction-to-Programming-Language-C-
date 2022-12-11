#include "stdio.h"
#include "string.h"

void sort(char *input_arr, char *sort_arr);

int main()
{
    char input_arr[101], sort_arr[101];
    scanf("%s", &input_arr);

    sort(input_arr, sort_arr);
    printf("%s", sort_arr);

    return 0;
}

void sort(char *input_arr, char *sort_arr)
{
    int counter[200], len, index, i;

    for (i = 0; i < 200; i++)
        counter[i] = 0;
    len = strlen(input_arr);

    for (i = 0; i < len; i++)
    {
        counter[input_arr[i]]++;
    }

    for (i = 0, index = 0; i < 200; i++)
    {
        if (counter[i] != 0)
        {
            while (counter[i] > 0)
            {
                sort_arr[index++] = i;
                counter[i]--;
            }
        }
    }

    sort_arr[index] = '\0';
}
