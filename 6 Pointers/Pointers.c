//Pointers: A variable which stores the address of another variable
//
//
//& is the address of the operator
//
//
//Format specifier of pointer is ---- "%u" ----
//value of adress of pointer is ----- * -----
//suppose 
//i -> 72 (value)          j -> 87994(value)
//address ->  87994        address -> 87998
//
//		&i = 87994     The value of address
//		&j = 87998     The value of address
//
//			       *(&i)= 72    The value of adress at i
//			       *(&j)= 87994 The value of adress at j
// %u---> deonote the address 
// &i and j are the address 




#include<stdio.h>
int main(){
	int i =34;
	int *j = &i; //j will now store the address of i
//	printf("The Value of i is   ---> %d\n", i);
//	printf("The Value of i is   ---> %d\n", *j);
	printf("The Value of address j is   ---> %u\n", &j); 
//	printf("The Address of i is ---> %u\n", &i);     
//	printf("The Address of i is ---> %u\n", j);    
//	printf("The Address of j is ---> %u\n", &j); 
//return 0;
}

