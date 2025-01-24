#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    float b = 0.2*a;
    int c = a-b;
    printf("The answer is : %d",c);

    return 0;
}
