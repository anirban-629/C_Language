#include <stdio.h>
#include <math.h>
int main(){
  int a, result1, result2;
  printf("Enter a number to calculate its r sqaure and square root\n");
  scanf("%d", &a);
  result1=pow(a,2);
  result2= sqrt(a);
  printf("Squareof %d = %d\n", a, result1);
  printf("Square root of %d = %d\n", a, result2);
  
  //this is also applicable and typecasting is needed in this process

  
  printf("Squareof %d = %d\n", a, (int)pow(a,2));
  printf("Square root of %d = %d\n", a, (int)sqrt(a));
  return 0;
}
