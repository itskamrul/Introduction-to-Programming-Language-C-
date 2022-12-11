#include <stdio.h>
#include <string.h>

struct Students
{
    int roll;
    char name[50];
    int age;
    float weight;
};

int main()
{
    struct Students s1 =
        {
            12,
            "kamrul islam",
            22,
            55.5};

    struct Students s2;
    s2.roll = 24;
    strcpy(s2.name, "Khairul islam");
    s2.age = 35;
    s2.weight = 93.34;

    printf("%d %s %d %f\n", s1.roll, s1.name, s1.age, s1.weight);
    printf("%d %s %d %f\n", s2.roll, s2.name, s2.age, s2.weight);

    return 0;
}