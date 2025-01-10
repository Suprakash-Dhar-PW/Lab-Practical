#include<stdio.h>
int main (){
    int i, NumberEntered;
    printf("Enter how many numbers you want to add : ");
    scanf("%d",&i);
    int sum = 0;
    printf("Enter a number to be added to the sum : ");
    scanf("%d",&NumberEntered);
        sum = sum + NumberEntered;
        printf("%d",sum);
    
    return 0;
}