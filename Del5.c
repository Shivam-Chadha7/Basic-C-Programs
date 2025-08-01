#include <stdio.h>
#include <stdbool.h>
int main (){
    int air1,air2,air3,air4,air5;
    printf("please enter the number");
    scanf("%d",&air1);
    air2 = air1 % 10;
    air3 = (air1 /10)% 10;
    air4 = air1/100;
    air5 = air2 + air3 + air4;
    printf("%d",air5);
    return 0;

}