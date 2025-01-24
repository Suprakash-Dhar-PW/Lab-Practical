#include<stdio.h>
int main(){
    int sum, number, remainder;
    sum = 0;
    number = 12345;

    for (;number>0;){
         remainder = number % 10;
        sum = sum + remainder;
        number = number / 10 ;
    }
    
     while(number>0){
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10 ;
     }
     printf("%d",sum);
    return 0;
}