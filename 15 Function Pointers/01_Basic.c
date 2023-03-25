#include<stdio.h>
#include<string.h>
int sum(int a, int b){
  return a+b;
}
int main(){
  int a,b, result;
  int (*func_pontr)(int ,int);
  printf("Enter 1st Number: ");
  scanf("%d",&a);
  printf("Enter 2nd Number: ");
  scanf("%d",&b);
  func_pontr=&sum;
  result= (*func_pontr)(a,b);
  printf("Sum of %d and %d = %d",a,b,result);
  return 0;
}
