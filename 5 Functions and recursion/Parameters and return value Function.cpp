//													Parameters and return value function


#include<stdio.h>
//(Sum is a function which takes a and b as an input and returns integer as an output)
int sum(int a, int b);  //Function prototype 
int main(){
	int c;
	c = sum(2, 4);  // Function call
	printf("The value of c is %d\n", c);          // Here a and b is PARAMETER but the values are like 2 and 4 are ARGUMENTS
//	printf("The value of c is %d\n", sum(2, 4)); //
return 0;
}
int sum(int a, int b){    //Function defination
	int result; 
	result = a+b;        //Thats defining that c is equals to result like c= a+b
	return result;
}
