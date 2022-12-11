#include "stdio.h"

void call_func(int a, int b)
{
    int tem;
    tem = a;
    a = b;
    b = tem;

    printf("call fuction: a= %d, b= %d\n", a, b);
}

int main()
{
    int a = 5, b = 10;
    call_func(a, b);
    printf("main function: a= %d, b= %d", a, b);
}