#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number of rows:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
        }
    }
