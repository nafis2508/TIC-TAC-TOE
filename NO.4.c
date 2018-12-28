#include<stdio.h>
double harmonicsum(int n);
int main()
{
    double number;
    scanf("%lf",&number);
    double result=harmonicsum(number);
    printf("the result is:.%.2f",result);
}
double harmonicsum (int n)
{
    int i;
    double sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+(double)1/i;
    }
    return sum;
}
