#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    char ch;
    printf("Enter your choice:(+,-,*,/)");
    scanf(" %c",&ch);
    switch(ch){
        case '+':
        printf("Sum = %d",a+b);
        break;
        case '-':
        printf("Difference = %d",a-b);
        break;
         case '*':
        printf("Product = %d",a*b);
        break;
         case '/':
        if (b != 0) {
                printf("Quotient = %.2f\n", (float)a / b); 
            } else {
                printf(" Division by zero is not allowed\n");
            }
            break;

        default :
        printf("Invalid choice");
        break;
    
    }
    return 0;
}