#include<stdio.h>
int sum(int a, int b);
int main(){
	int a=4, b=7;
	printf("The value of a+b is %d\n", sum(a,b));
return 0;
}
int sum(int a, int b){
	int c;
	c= a+b;
	a= 23432;  //Don't matter that what is
	b= 3434;   // the value of a and b here
	return c;
}


