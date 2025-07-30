#include <stdio.h>
#include <stdbool.h>
int main(){
int a;
float b;
float m;
float cat;
printf("Please enter your salary\n");
scanf("%d",&a);
m=0.4*a;
cat=0.2*a;
b=a+m+cat;
printf("Your gross salary is %f\n",b);
return 0;
}
