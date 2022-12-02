#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int t, i, j;
    scanf("%d", &t);
    scanf(" ");
    char arr[21][21];
    char rev[21], ch;

    for (i = 1; i <= t; i++)
    {
        scanf("%s", &arr[i]);
    }

    for (i = 1; i <= t; i++)
    {
        strcpy(rev, arr[i]);
        int len = strlen(arr[i]);

        for (j = 0; j < len - 1 / 2; j++)
        {
            ch = rev[i];
            rev[i] = rev[len - 1 - i];
            rev[len - 1 - i] = ch;
        }

        if (strcmp(arr[i], rev) == 0)
        {
            if (len > 7)
            {
                printf("Case #2: %c", arr[i][0]);
                printf("%d", len - 2);
                printf("%c", arr[i][len - 1]);
            }
            else
            {
                printf("Case #3: %s", arr[i]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome");
        }
        printf("\n");
    }

    return 0;
}
