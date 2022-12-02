#include <stdio.h>
int main()
{
    float number, ans, x;
    scanf("%f", &number);
    ans = number / 3;
    long long int ans2 = number / 3;
    x = ans - ans2;

    if (x == 0.0f)
    {

        printf("%lld", ans2);
    }
    else
    {
        printf("%d", -1);
    }

    return 0;
}