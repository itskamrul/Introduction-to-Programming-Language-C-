#include<stdio.h>
int main()
{
    int n,w,i;
    int sum = 0;
    printf("Enter a number of passangers: ");
    scanf("%d",&n);
    i = 1;
    while (i<=n)
    {
        printf("enter %d passanger wight: ",i);
        scanf("%d",&w);
        sum += w;
        i++;
    }
    printf("total Wight of all passangers: %d",sum);
    return 0;
}