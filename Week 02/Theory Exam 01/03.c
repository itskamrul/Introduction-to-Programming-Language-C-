#include<stdio.h>
int main()
{
    long long int n;
    int  c=0;
    scanf("%lld",&n);
    while (n>0)
    {
        n=n/10;
        c++;
    }
    printf("%d digits",c);
   
    return 0;
}
