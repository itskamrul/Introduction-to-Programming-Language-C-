#include <stdio.h>

char cal_grad(int n)
{
    if (n < 40)
        return 'F';
    else if (n >= 40 && n < 60)
        return 'C';
    else if (n >= 60 && n < 80)
        return 'B';
    else if (n >= 80 && n <= 100)
        return 'A';

    return 0;
}

int main()
{
    int mark;
    scanf("%d", &mark);

    char grad = cal_grad(mark);
    printf("%c", grad);
}