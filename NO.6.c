#include <stdio.h>
int main()
{
  int n, c, k;
  printf("Enter number of rows\n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
  {
    for(k = 1; k <= c; k++)
      printf("*");
    printf("\n");
  }
  for (c = n; c >= 1;c--)
  {
    for(k = 1; k <= c; k++)
      printf("*");
    printf("\n");
  }
}
