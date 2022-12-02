#include<stdio.h>
int main()
{
    long long int n,m;
    scanf("%lld",&n);
    int sum=0;
    while (n>0)
    {
        m=n%10;
        sum +=m;
        n=n/10;
    }
    printf("%d",sum);
   
    return 0;
}
