#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the three integers:");
    scanf("%d\n %d\n %d",&x,&y,&z);
    if((x>y && x<z) || (x>z && x<y))
    {
       printf("The second largest number:%d",x);
    }
    if((y>x && y<z) || (y>z && y<x))
    {
       printf("The second largest number:%d",y);
    }
    if((z>x && z<y) || (z>y && z<x))
    {
       printf("The second largest number:%d",z);
    }
    return 0;
}


