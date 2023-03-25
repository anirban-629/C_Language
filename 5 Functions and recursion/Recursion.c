//															Recursion

//Recursion is the process which comes into existence when a function calls a copy of itself to work on a similar problem. 
//Any function which calls itself is called recursive function, and such function calls are called recursive calls. 
//Recursion involves several numbers of recursive calls.

//Function in function

//1.....

#include<stdio.h>
int factorial (int x);
int main(){
	int a;
	printf("Enter the number \n");
	scanf("%d", &a);
	printf("Factorial %d = %d\n", a, factorial(a));
return 0;
}
int factorial (int x){
	printf("Calling factorial %d\n", x);
	if(x==1 || x==0){
		return 1;
	}
	else{
		return x*factorial(x-1);
	}
}

























