#include<stdio.h>
void listNumbersAsc(int start,int end);
int main()
{
    int a,b;
    printf("enter the number from where you want to START and END:");
    scanf("%d %d",&a,&b);
    listNumbersAsc(a,b);
}
void listNumbersAsc(int start,int end)
{
    int i,x;
    for(i=start;i<=end;i++)
    {
        printf("  %d\n",i);
    }
}
