#include "stdio.h"

struct Student
{
    char name[20];
    float marks;
    int roll;
};

int main()
{
    struct Student infoo;
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", infoo.name);
    printf("Enter roll number: ");
    scanf("%d", &infoo.roll);
    printf("Enter marks: ");
    scanf("%f", &infoo.marks);

    printf("\nDisplaying Information: \n");
    printf("Name: %s\n", infoo.name);
    printf("Roll number: %d\n", infoo.roll);
    printf("Marks: %0.1f\n", infoo.marks);
}
