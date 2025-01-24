#include<stdio.h>
int main(){
    int number, sum, remainder;
    sum = 0;
    number = 12345;
    remainder = number % 10; //5
    sum = sum + remainder;
    
    //remove last digit
    number = number / 10; //new number

    //number=1234;
    remainder = number % 10;
    sum = sum + remainder;
    number = number / 10;

    //number=123;
     remainder = number % 10;
    sum = sum + remainder;
    number = number / 10;

    //number=12;
     remainder = number % 10;
    sum = sum + remainder;
    number = number / 10;
    
    //number=1;
     remainder = number % 10;
    sum = sum + remainder;
    number = number / 10;

    // number=0;
    

    printf("%d",sum);
   return 0;
}