#include<stdio.h>
#include<string.h>
float area(float r){
  float b=3.14*r;
  printf("Radius= %.2f",b);
}
int main(){
  float rad,result;
  float (*func)(float);
  func=&area;
  printf("Enter Radius: ");
  scanf("%f",&rad);
  result=(*func)(rad);
  // printf("Radius of the circle will be: %.2f\n",result);
  return 0;
}
