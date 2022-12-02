#include<stdio.h>
int main ()
{
    int a,b,c,d;
    printf("Enter the four number: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum;
    sum = a+b+c+d;
    printf("sum of four numbers is %d\n", sum);
    int average;
    average = sum/4;
    printf("the average value of foure numbers is %d", average);
    return 0;
}
