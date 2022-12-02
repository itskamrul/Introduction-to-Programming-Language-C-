#include <stdio.h>
int main()
{

    char a[100], b[100];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);
    int i, len = strlen(a);

    for (i = 0; i < len; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] += 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z')
        {
            b[i] += 32;
        }
    }

    int ans = strcmp(a, b);

    if (ans == 0)
    {
        printf("they are equal");
    }
    else
    {
        printf("they are not equal");
    }
}