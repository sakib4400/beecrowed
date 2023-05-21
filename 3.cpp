#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number :\n");
    scanf("%d",&a);
    if (a>=0)
    {
      printf("%d is possetive", a);  /* code */
    }
    else if (a<0)
    {
        printf("%d is negative ", a);
    }
    else if (a==0)
    {
        printf("ZERO");
    }
    return 0;
    
}