#include<stdio.h>
int main(){
    int number, sum, remainder, factorial1, factorial2, factorial3, factorial4, factorial5;
    sum = 0;
    number = 40585;
    factorial1=1;
    remainder = number % 10;
    number = number / 10;
    while (remainder>=0)
    {
        factorial1 = factorial1 * remainder;
        remainder++;
    }
        sum = sum + factorial1;
    
    // // factorial1 = factorial1 * 1;
    // // factorial1 = factorial1 * 2;
    // // factorial1 = factorial1 * 3;
    // // factorial1 = factorial1 * 4;
    // // factorial1 = factorial1 * 5;
    // sum = sum + factorial1;

    // remainder = number % 10;
    // number = number / 10;
    // // factorial2 = factorial2 * 1;
    // // factorial2 = factorial2 * 2;
    // // factorial2 = factorial2 * 3;
    // // factorial2 = factorial2 * 4;
    // // factorial2 = factorial2 * 5;
    // // factorial2 = factorial2 * 6;
    // // factorial2 = factorial2 * 7;
    // // factorial2 = factorial2 * 8;
    // sum = sum + factorial2;

    // remainder = number % 10;
    // number = number / 10;
    // // factorial3 = factorial3 * 1;
    // // factorial3 = factorial3 * 2;
    // // factorial3 = factorial3 * 3;
    // // factorial3 = factorial3 * 4;
    // // factorial3 = factorial3 * 5;
    // sum = sum + factorial3;

    // remainder = number % 10;
    // number = number / 10;
    // // factorial4 = factorial4 * 1;
    // sum = sum + factorial4;

    // remainder = number % 10;
    // number = number / 10;
    // // factorial5 = factorial5 * 1;
    // // factorial5 = factorial5 * 2;
    // // factorial5 = factorial5 * 3;
    // // factorial5 = factorial5 * 4;
    // sum = sum + factorial5;

    printf("%d",sum);

    return 0;
}