#include<stdio.h>
int main (){
    int n, NumberEntered;
    printf("Enter how many numbers you want to add : ");
    scanf("%d",&n);
    int sum = 0;
    for(int i=1; i<=n; i++){
        printf("Enter a number to be added to the sum : ");
        scanf("%d",&NumberEntered);
        sum = sum + NumberEntered;
    }
    printf("%d",sum);
     return 0;
}