#include<stdio.h>
int main()
{
    int number,digit,sum;
    sum=0;
    printf("enter the number:\n");
    scanf("%d",&number);
    while(number>0)
    {
     digit=number%10;
     number=number/10;
     sum=sum+digit;
    }
    printf("the sum of all the digits:%d",sum);
    return 0;
}
