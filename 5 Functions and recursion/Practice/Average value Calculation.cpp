#include<stdio.h>
float Average(int a ,int b, int c);

int main(){
	int a, b, c;
	printf("Enter the value of a \n");
	scanf("%d", &a);
	printf("Enter the value of b \n");
	scanf("%d", &b);
	printf("Enter the value of c \n");
	scanf("%d", &c);
	printf("The average value is %f\n", Average(a, b, c));
}
float Average(int a ,int b, int c){
	float result;
	result =(float)(a+b+c)/3 ;
	return result;
}

