#include<stdio.h>
int main(){
    char array[] = {'h','e','l','l','o'};
    char temp;
    temp = array[0];
    array[0] = array[4];
    array[4] = temp;
    temp = array[1];
    array[1] = array[3];
    array[3] = temp;
    array[2] = array[2];
    printf("%c",array[0]);
    printf("%c",array[1]);
    printf("%c",array[2]);
    printf("%c",array[3]);
    printf("%c",array[4]);

    return 0;
}