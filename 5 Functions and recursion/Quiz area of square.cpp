#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Enter the value of the side\n");
	scanf("%d", &a);
		printf("The area of the square is %f\n", pow(a, 2)); 
  //pow returns double thats why it needs %f
	return 0;
}

