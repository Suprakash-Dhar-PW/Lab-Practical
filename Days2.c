#include<stdio.h>
int main(){
    char day;
    printf("Enter a day : ");
    scanf("%c",&day);
    if(day=='s'){
        printf("weekend");
        return 0;
    }
    if(day=='m' || day=='t' || day=='w' ||day=='f'){
        printf("weekday");
        return 0;
    }
    else{
        printf("invalid input");
    }
    return 0;
}