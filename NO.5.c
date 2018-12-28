#include<stdio.h>
int sumOfDigits(int x);
int main()
{
    int number;
    scanf("%d",&number);
    int result=sumOfDigits(number);
    printf("the result is:%d",result);
}
int sumOfDigits(int x)
{
    int digit,sum=0;
    for(;x>0;)
    {
        digit=x%10;
        x=x/10;
        sum=sum+digit;
    }
    return sum;
}
