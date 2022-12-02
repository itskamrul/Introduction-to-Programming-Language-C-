#include<stdio.h>
int main()
{
    int n,i,x;
    scanf("%d",&n);

    for ( i = 2; i<n; i++)
    {
        if (n%i == 0)
        {
            x=i;
            break;
        }
        else
        {
            x=i;
        }
        
    }

    if (n%x == 0)
        {
            printf("Composite");
        }
        else
        {
            printf("Prime");
        }
    return 0;
}