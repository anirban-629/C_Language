#include<stdio.h>
int main(){
  int n,sum=1,i=0;
printf("Enter a Number to get it's Fatorial: ");
scanf("%d",&n);
for(i=n;i>0;i--){
  sum*=i;
}
printf("Factorial %d is -> %d",n,sum);
  return 0;
}
