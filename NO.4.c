#include<stdio.h>
int perfect_number(int number);
int main()
{
    int x,result;
    printf("enter a number:");
    scanf("%d",&x);
    result=perfect_number(x);
    if(result==1)
        printf("perfect number");
    else
        printf("not a perfect number");

}
int perfect_number(int number)
{
    int i,sum=0;
    for(i=1;i<number;i++)
    {
        if(number%i==0)
        sum=sum+i;
    }
    if(sum==number)
   return 1;
    else
   return 0;

}
