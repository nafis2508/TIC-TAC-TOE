#include<stdio.h>
void pattern(int length);
int main()
{
    int l;
    l=3;
    pattern(l);
    return 0;
}
void pattern(int length)
{
    int i,j,k;
    for(i=length;i>0;i--)
    {
        for(j=length;j>i;j--)
        {
            printf(" ");
        }
        if(i%2==0)
        {
            for(k=1;k<=i;k++)
            {
                printf("$");
            }
        }
        else
        {
            for(k=1;k<=i;k++)
            {
            printf("%d",i);
            }
        }
        printf("\n");
    }
}
