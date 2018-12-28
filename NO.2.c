#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("enter any positive integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       fact=fact*i;

    }
    printf("sum:%d",fact);
}
