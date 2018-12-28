#include<stdio.h>
int main()
{
    int i,a,x,term=1;
    scanf("%d %d",&a,&x);
    for(i=1;i<=x;i++)
    {
        term=term*a;
    }
    printf("the required result:%d",term);
}
