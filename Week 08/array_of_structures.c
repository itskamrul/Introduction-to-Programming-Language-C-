#include <stdio.h>
#include <stdlib.h>

struct array_of_struct
{
    double wieght;
    int roll;
};

int main()
{
    struct array_of_struct s[10];

    for (int i = 0; i < 10; i++)
    {
        s[i].roll = 10+i;
        s[i].wieght=21.3+i*2;

    }

    for (int i = 0; i < 10; i++)
    {
        printf("Roll: %d Weight: %lf\n", s[i].roll, s[i].wieght);
    }
}
