#include <stdio.h>
int main()
{
    long long int n1, n2;
    int sum = 0;
    scanf("%lld", &n1);
    while (n1 > 0)
    {
        n2 = n1 % 10;
        sum += n2;
        n1 = n1 / 10;
    }
    printf("%d", sum);

    return 0;
}
