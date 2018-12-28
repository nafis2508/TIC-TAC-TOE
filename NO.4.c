#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter value of n : ");
    scanf("%d", &n);
    //Loop for printing upper half part of the pattern
    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    //Loop for printing lower half part of the pattern
    for(i=2; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
