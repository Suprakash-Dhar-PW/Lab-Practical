#include<stdio.h>
int main(){
    int i = 0;
    int arr[] = {-1,1,2,3};
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    arr[2] = 20;
    printf("%d\n",arr[2]);
    printf("%d\n",arr[20]);
    
    return 0;
}