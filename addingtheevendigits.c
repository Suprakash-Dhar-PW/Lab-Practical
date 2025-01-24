#include<stdio.h>
int main(){
    int sum, number, remainder, num, even_number;
    sum = 0;
    number = 123456;
    
       while (number>0)
       {
         if(num%2==0){
            num = number % 10 ;
            number = number / 10;
            even_number = num;
            sum = sum + num;
            
        }
       }
       printf("%d",sum);
       
    
    
    return 0;
}