#include <stdio.h>

int main()
{
    char operator;
    printf("enter the operator");
    scanf("%c",&operator);
    // printf("%c", operator);
    
    float a ;
    float b;
    printf("Enter the first number : ");
    scanf("%f",&a);
    printf("Enter the second number : ");
    scanf("%f",&b);
    if(operator == '+'){
        printf("%f",a+b);
    } 
    else if(operator == '-'){
        printf("%f",a-b);
    }
    else if(operator == '*'){
        printf("%f",a*b);
    }
    else printf("%f",a/b);
    

    return 0;
}