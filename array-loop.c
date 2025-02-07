#include<stdio.h>
int main(){
    int i=0;
    int arr[] = {-1,1,2,3};
    arr[0]=-11;
    for(i=0;i<=4;i++){
        printf("%d\n",arr[i]);
    }
    if(arr[3]==30){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}