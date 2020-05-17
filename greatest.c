#include<stdio.h>
int main()
{
    int num1,num2;

    printf("Enter the first number : ");
    scanf("%d" ,&num1);

    printf("Enter the second number : ");
    scanf("%d" ,&num2);

    if(num1>num2)
    {
        printf("The first number %d is the greatest of the rest numbers" ,num1);
    }
    else
    {
        printf("The second number %d is the greatest of the rest numbers" ,num2);
    }
    return 0;
}    