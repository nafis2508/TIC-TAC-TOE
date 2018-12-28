#include<stdio.h>
void listNumbersDesc(int start,int end);
int main()
{
    int a,b;
    printf("enter the number from where you want to START and END:");
    scanf("%d %d",&a,&b);
    listNumbersDesc(a,b);
}
void listNumbersDesc(int start,int end)
{
    int i,x;
    for(i=end;i>=start;i--)
    {
        printf("  %d\n",i);
    }
}

