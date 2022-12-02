#include<stdio.h>
int main()
{
    int n,w,i;
    int sum =0;
    printf("Enter passangers number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter %d passanger wight: ",i);
        scanf("%d",&w);
        sum += w;
    }
    printf("total wight: %d", sum);
    return 0;
}