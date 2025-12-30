#include<stdio.h>
int main(){
    float pi=3.14;
    float r;
    printf("Enter the radius :");
    scanf("%f",&r);
    float area=pi*r*r;
    printf("Area of circle = %f",area);
    return 0;
}