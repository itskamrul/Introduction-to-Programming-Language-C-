#include<stdio.h>
int main()
{
    int x, y;
    printf("Enter x value\n ");
    scanf("%d", &x);
    printf("Enter y value\n ");
    scanf("%d", &y);
    if(x>y)
    {
        printf("X is greater then y");
    }
    else if(x<y)
    {
        printf("Y is greater then x");
    }
    else
    {
        printf("they are same");
    }
    return 0;
}
