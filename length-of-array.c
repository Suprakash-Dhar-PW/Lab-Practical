#include<stdio.h>
int main(){
    int total, individual, length;
    char arr[] = {'x','y','z'};
    total = sizeof(arr);
    individual = sizeof(arr[0]);
    length = total/individual;
    printf("%d",length);
    return 0;
}