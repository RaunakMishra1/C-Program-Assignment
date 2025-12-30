#include<stdio.h>
int main()
{
    int n;
    printf("Enter any natural number:");
    scanf("%d",&n);
    int sum= n*(n+1)/2;
   printf("Sum of first %d natural number is = %d",n,sum);
   return 0;
}