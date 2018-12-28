#include<stdio.h>
void prime();
void main()
{
    prime();
}
void prime()
{
    int n,i,flag=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        flag = 0;
    }
    if(flag == 1)
      printf("Number is Prime",n);
    else
      printf("Number is not Prime",n);
}
