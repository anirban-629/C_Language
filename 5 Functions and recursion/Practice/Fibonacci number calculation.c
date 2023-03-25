#include<stdio.h>
int Fibonacci(int a);
int main(){
	int b;
	printf("The nth Fibonacci ---->>>> ");
	scanf("%d", &b);
	printf("The value of Fibonacci number is ---->>>> %d\n", Fibonacci(b));
return 0;
}
int Fibonacci(int a){
	int result;
	result=(a-1)+(a-2);
	return result;
}

