#include<stdio.h>
int main(){

double x;
double y;
char operator;

printf("Enter a num: ");
scanf("%lf",&x);
printf("Enter an operator: ");
scanf(" %c",&operator);
printf("Enter a num: ");
scanf("%lf",&y);
switch(operator){

case('+'):printf("%f",x+y);break;
case('-'):printf("%f",x-y);break;
case('/'):printf("%f",x/y);break;
case('*'):printf("%f",x*y);break;

}


}