#include<stdio.h>
int main(){
  int a1,a2,a3;
  printf("Enter angle 1 ");
  scanf("%d",&a1);
  printf("Enter angle 2 ");
  scanf("%d",&a2);
  printf("Enter angle 3 ");
  scanf("%d",&a3);
  if(a1==90||a2==90||a3==90){
  printf("This is a Triangle");
}
  else{
    printf("This is not a Triangle");
}
  return 0;
}
