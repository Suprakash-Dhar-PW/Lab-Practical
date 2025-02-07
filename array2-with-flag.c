#include<stdio.h>
int main(){
    int i = 0;
    int num = 50;
    int arr[] = {-1,1,50,2,30,-76};
    int flag = 0;
    for(i=0;i<=5;i++){
        if(arr[i]==num){
            printf("The value is %d at index : %d",num,i);
            flag = 1;
        }
    }
        if(flag==0){
            printf("Error");
        }
    
    return 0;
}