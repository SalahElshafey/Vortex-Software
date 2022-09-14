#include<stdio.h>
//R=Right tringle /C=circle/s=square/P=pyramid

void square(int height){

   for(int i=0;i<height;i++){
    for(int j=0;j<height;j++){
        printf("*");
    }
    printf("\n");
   }
}
void circle(int height){
     float dist;
 
  // for horizontal movement
  for (int i = 0; i <= height; i++) {
 
    // for vertical movement
    for (int j = 0; j <= height; j++) {
      dist = sqrt((i - height/2) * (i - height/2) +
                  (j - height/2) * (j - height/2));
 
      // dist should be in the range (radius - 0.5)
      // and (radius + 0.5) to print stars(*)
      if (dist > (height/2) - 0.5 && dist < (height/2) + 0.5)
        printf("*");
      else
       printf(" ");     
    }

   printf("\n");
  }
}

void pyramid(int height){
    for(int i=1;i<=height;i++){
    for(int z=1;z<=(height-i);z++){
    printf(" ");}
    //to print *
    for(int symbol=1;symbol<=((2*i)-1);symbol++)
    printf("*");
    
    printf("\n");
  }
}
void R_triangle(int height){
for(int i=0;i<height;i++){
    for(int j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");
}
}

typedef struct q{
int height;
char shape;
}S;


int main(){
S Var;
printf("for Right triangle:R\n for square:s\n for pyramid:P\n for Circle:C\n");
printf("please enter Character: ");
scanf("%c",&Var.shape);
printf("please enter height: ");
scanf("%d",&Var.height);
if(Var.height<2){
    printf("please enter a greater number");
   return 0;}
else{
if(Var.shape=='s'){
    square(Var.height);
}else if(Var.shape=='R'){
    R_traingle(Var.height);
}else if(Var.shape=='P'){
    pyramid(Var.height);
}else{
    circle(Var.height);
}}


}