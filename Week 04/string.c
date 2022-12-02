#include <stdio.h>
int main()
{
    char name[150];
    fgets(name, sizeof(name), stdin);
    int i = 0, counter = 0;

    // while (name[i] != '\0')
    // {
    //     if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
    //     {
    //         counter++;
    //     }
    //     i++;
    // }

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            counter++;
        }
    }

    printf("total vowels is: %d", counter);
}