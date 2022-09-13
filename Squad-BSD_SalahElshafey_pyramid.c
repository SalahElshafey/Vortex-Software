
#include<stdio.h>
//pyramid with pattern
int main(){
int height;
printf("please enter the height: ");
scanf("%d",&height);

if(height<=1)
  return 0;
  for(int i=1;i<=height;i++){
    for(int z=1;z<=(height-i);z++){
    printf(" ");}
    //to print *
    for(int symbol=1;symbol<=((2*i)-1);symbol++)
    printf("*");
    
    printf("\n");
  }

 }

 //another solution but pyramid with dashed shape

int main(){
 int height;
 printf("please enter a height: ");
 scanf("%d",&height);
 if(height<=1)
    return 0;
 int left=(height/2)-1,right=(height/2)-1;
char arr[height][height];
for(int i=0;i<height;i++){
   if(right==(height/2)-1&&left==(height/2)-1){
    arr[right]='*';
    right+=1;
    left-=1;
   }else if(right>(height/2)-1&&left<(height/2)-1){
     arr[right]='\0';
     arr[left]='/';
     right+=1;
     left-=1;
   }
}
for(int i=0;i<height;i++){
    arr[height][i]=('-');
}
for(int i=0;i<height;i++){
    for(int j=0;j<height;j++){
        printf("%c",arr[i][j]);
    }
}

//half pyramid
int main(){
int height;
printf("please enter the height: ");
scanf("%d",&height);
if(height<=0)
    return 0;

for(int i=0;i<height;i++){
    for(int j=0;j<=i;j++){
        printf("*");
    }
    printf("\n");
}

}



















