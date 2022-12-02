#include<stdio.h>
int main()
{
    int n,i,h,sum=0;
    scanf("%d",&n);
    int arr[n];

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
        if (arr[i]>arr[i-1])
        {
            h=arr[i];
        }
        
    }

    printf("Array{");

    for ( i = 0; i < n-1; i++)
    {
        printf("%d,",arr[i]);
    }

    printf("%d}\n",arr[n-1]);
    printf("sum is %d\n",sum);
    printf("high is %d",h);
    
    
}