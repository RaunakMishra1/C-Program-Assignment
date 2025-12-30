#include<stdio.h>
int main()
{
    int arr[5];
     printf("Enter array elements :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<5;j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}