#include<stdio.h>
int main(){
int x;
printf("Enter a number: ");
scanf("%d",&x);
if(x%5==0 && x%11==0){
  printf("The value is divisible by 5 and 11");
}
else{
  printf("The value is not divisible by 5 and 11");
}
  return 0;
}
