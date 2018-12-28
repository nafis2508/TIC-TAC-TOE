#include<stdio.h>
int sum(int n);
int main()
{
    int number;
    scanf("%d",&number);
    int result=sum(number);
    printf("the result is:%d",result);
}
int sum(int n)
{
    int add=0,i;
    for(i=1;i<=n;i++)
    {
        add=add+i;
    }
    return add;
}

