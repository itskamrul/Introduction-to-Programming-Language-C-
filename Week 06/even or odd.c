#include <stdio.h>
void evenOrOdd(int x)
{
    if (x % 2 == 0)
        printf("even");
    else
        printf("Odd");
}
int main()
{
    int n;
    scanf("%d", &n);
    evenOrOdd(n);
    return 0;
}