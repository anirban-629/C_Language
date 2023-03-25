#include<stdio.h>
#include<math.h>
int main(){
  int n;
  printf("Enter number: ");
  scanf("%d",&n);
  printf("N^1-> %.2f\n",pow(n,1));
  printf("N^2-> %.2f\n",pow(n,2));
  printf("N^3-> %.2f",pow(n,3));
  return 0;
}
