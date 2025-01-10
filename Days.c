#include <stdio.h>

int main()
{
    char day;
   printf("Today is : ");
   scanf("%c",&day);
   if(day=='s'){
       printf("weekend");
   }
   else {
       printf("weekdays");
   }
    return 0;
}