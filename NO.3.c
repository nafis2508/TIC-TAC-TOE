#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(n*2 -(2*i-1)); j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
