#include<stdio.h>
int main(){
    int i;
    int a = 0;
    int b = 1;
    int c = a + b;
    printf("%d ",a);
    printf("%d ",b);
    printf("%d ",c);
    for(int i=1; i<=10; i++){
        a = b;
        b = c;
        c = a + b;
        printf("%d ",c);
    }
     return 0;
}