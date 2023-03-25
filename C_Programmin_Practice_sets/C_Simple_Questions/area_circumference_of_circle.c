#include<stdio.h>
int main(){
  float r;
  printf("Enter the radius of the circle: ");
  scanf("%f",&r);
  printf("The area of the circle is: %.2f",3.14*r*r);
  printf("The circumference of the circle is: %.2f",2*3.14*r);
  return 0;
}
