#include <stdio.h>
int main()
{
  int a;
  printf("Enter the number :");
  scanf("%d", &a);
  if (a % 5 == 0 && a % 11 == 0)
  {
    printf("Divisible");
  }
  else
  {
    printf("not");
  }
  return 0;
}
