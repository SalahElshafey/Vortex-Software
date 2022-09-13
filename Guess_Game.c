#include<stdio.h>
int main(){
    int guess,GuessLimit=0,count=0;

while(guess!=5&&GuessLimit==0){
     if(count<3){
    scanf("%d",&guess); count++;}else{
        GuessLimit=1;
    }
   
}
if(GuessLimit==1){
    printf("Wrong((");
}else{
    printf("YoU Win!!");
}


}