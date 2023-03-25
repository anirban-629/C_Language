//	int *ptr=NULL  -->> That means *ptr is not setted to point anything
//	NULL pointer can not be dereferenced..

//	int x=10;

//	int *ptr=NULL; //NULL pointer is declared we can't dereference he
//
//	ptr=&x;  //Now here it can be dereferenced
//
//	NULL pointer will throw garbage value inn compiler



#include<stdio.h>
int main(){
	int a=30;
	int *ptr=&a;
//	int *ptr=NULL;
//	printf("Address of a is %d\n",ptr);
	//Most of the compilers will execute 0 as it's a null pointer
	
//	printf("Value of a is %d\n",*ptr);
	//Compiler will not under stand that what to do as it's a null pointer that's why it'll crash
	
	if(ptr!=NULL){
	printf("Value of a is %d\n",*ptr);
	//Then I Have to declare *ptr=&a;
}
	else{
	
	printf("This is a Null pointer");
	return 0;
}
}
