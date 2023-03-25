#include<stdio.h>
int main(){
int i,n;
printf("Enter the number to get multiplication table: ");
scanf("%d",&n);
printf("Multiplication Table: \n");
for (i = 0; i < 10; i++) {
  printf("%d X %d = %d\n",n,i+1,n*(i+1));
}
  return 0;
}
