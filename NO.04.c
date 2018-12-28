#include <stdio.h>
int main()
{
	float x,sum=1,term=1;
	int i,n;
	printf("Input the value of x :");
	scanf("%f",&x);
	printf("Input number of terms : ");
	scanf("%d",&n);
	for (i=1;i<n;i++)
	{
	  term = term*x/(float)i;
	  sum =sum+ term;
	}
	printf("The sum  is : %f",sum);
}
