#include<stdio.h>
int main(){

double x,y,z,s=0,avg;

scanf("%lf%lf%lf",&x,&y,&z);
s=x+y+z;
printf("sum is: %.2f",s);
avg=(x+y+z)/3;
printf("average is : %.2f",avg);
return 0;

}