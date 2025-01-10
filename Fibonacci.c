#include<stdio.h>
int main(){
    int a = 0;
    int b = 1;
    int c = a + b;
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
    a = b;
    b = c;
    c = a + b;
    printf("%d",c);
    a = b;
    b = c;
    c = a + b;
    printf("%d",c);
    a = b;
    b = c;
    c = a + b;
    printf("%d",c);
    a = b;
    b = c;
    c = a + b;
    printf("%d",c);

    return 0;
}