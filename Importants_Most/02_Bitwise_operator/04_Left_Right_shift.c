#include<stdio.h>
#include<string.h>
int main(){
  int a=10,b=64;
  printf("Left Shift: %d\n",a<<3);
  printf("Right Shift: %d",b>>3);
  return 0;
}

/*
Theory:

a=10, b=64

a<<3 = 10 * (2^3) = 10 * 8 = 80
b>>3 = 10 / (2^3) = 10 / 8 = 8

*/
