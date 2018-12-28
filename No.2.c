#include<stdio.h>
int main()
{
    int input,hour,min,second; //time given as input in seconds//
    printf("Enter the time in seconds:");
    scanf("%d",&input);
    hour=0;
    min=0;
    second=0;

    hour=input/3600;
    input=input%3600;
    min=input/60;
    input=input%60;
    second=input;
    printf("the converted time:%d hour %d minute %d second",hour,min,second);
    return 0;
}
