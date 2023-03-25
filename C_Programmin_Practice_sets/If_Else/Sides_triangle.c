#include<stdio.h>
#include<math.h>
int main(){
  float a1,a2,a3,result;
  printf("Enter Hyperbolic ");
  scanf("%f",&a1);
  printf("Enter side 1 ");
  scanf("%f",&a2);
  printf("Enter side 2 ");
  scanf("%f",&a3);
  result=sqrt(pow(a2,2)+pow(a3,2));
  if(a1==result){
printf("This is a triangle");
  }
  else{
    printf("This is not a triangle");
  }
  return 0;
}
