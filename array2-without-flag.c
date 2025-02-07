#include<stdio.h>
int main(){
    int array[] = {-1,1,5,-8,2};
    int key = 100;
    int index = 0;
    for(index=0;index<=5;index++);{
        if(key==array[index]){
            printf("%d",index);
            return 0;
        }
    }
    printf("%d",-1);
    return 0;
}