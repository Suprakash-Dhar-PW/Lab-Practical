#include<stdio.h>
int main(){
     int number;
   printf("Enter the number : ");
   scanf("%d",&number);
   int i = 1;
   int factorial = 1;
    
    if(number>0){
         while (i<=number)
    {
        factorial = factorial * i;
        i++;
    }
     printf("The factorial of the given number is : %d",factorial);
    }
    else{
        printf("Please enter positive number");
    }
    return 0;
}