#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first , second and third number:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b  && a>c)
    {
        printf("First number is greater = %d",a);
    }
   else if(b>a && b>c)
    {
        printf("second number is greater = %d",b);
    }
    else if(c>a  && c>b)
    {
        printf("Third number is greater = %d",c);
    }
    return 0;
}