#include<stdio.h>
#include<string.h>
int sum(int a,int b);
int main(){
  int x,y;
  printf("Enter X: ");
  scanf("%d",&x);
  printf("Enter Y: ");
  scanf("%d",&y);
  printf("X+Y=%d",sum(x,y));
  return 0;
}
int sum(int a,int b){
  return a+b;
}
