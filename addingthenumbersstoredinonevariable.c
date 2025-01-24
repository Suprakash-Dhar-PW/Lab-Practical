#include<stdio.h>
int main(){
    int sum = 0;
    int number = 51;
    int msd = number/10;

    int lsd = number%10;

    sum = sum + lsd +msd;

    printf("%d",sum);
    return 0;
}