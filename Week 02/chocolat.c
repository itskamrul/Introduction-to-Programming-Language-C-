#include<stdio.h>
// int main()
// {
//     int n;
//     printf("How many chocolate you buy: ");
//     scanf("%d",&n);
//     int choco = n;
//     int pack = n;
//     while(pack>=4)
//     {
//         choco += (pack/4);
//         pack =(pack/4)+(pack%4);
//     }
//     printf("Total chocolate: %d",choco);
//     return 0;
// }

int main()
{
    int a=0,i=0;
    printf("4");
    for (i=0; i<5; i++)
    {
        a+=1;
        if (i==3)
            break;
    }
    printf("%d\n",a);
    return 0;
}