#include<stdio.h>
int main()
{
  int a,b,c,temp;
  printf("Enter the first integer:");
  scanf("%d",&a);
  temp=a;
  printf("Enter the second integer:");
  scanf("%d",&b);
  a=b;
  printf("Enter the third integer:");
  scanf("%d",&c);
  b=c;
  c=temp;
  printf("the changed values:%d %d %d",b,c,a);
  return 0;
}
