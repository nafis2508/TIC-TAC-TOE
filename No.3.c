#include<stdio.h>
int main()
{
    char input;
    printf("enter the alphabet:");
    scanf("%c",&input);
    input++;
    printf("the next alphabet is:%c",input++);
    return 0;
}
