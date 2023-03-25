#include<stdio.h>
#include<string.h>
int sum(int a, int b){
  return a+b;
}
void goodmorning(int (*ptr)(int,int)){
  int a=10,b=20;
  printf("Sum=%d\n",ptr(a,b));
}
int main(){
  int (*ptr)(int,int);
  ptr=&sum;
  // ptr=sum;
  goodmorning(ptr);
  return 0;
}
