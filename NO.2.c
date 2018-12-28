#include<stdio.h>
void check_character(char c);
int main()
{
     char c;
     printf("enter an input:");
     scanf("%c",&c);
     check_character(c);
}
void check_character(char x)
{
    if(x>='A' && x<='Z' || x>'a'&& x<='z')
        printf("character");
    else if(x>='0' && x<='9')
        printf("digit");
    else
        printf("special character");
}
