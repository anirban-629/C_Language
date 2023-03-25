//void pointer has no datatype
//a void pointer can be easily typecasted to any pointer type like int char..
//it's a general purpose pointer variable


//VOID POINTER CANNOT BE DEREFFERENCED DIRECTLY

#include<stdio.h>
int main(){
	int a=10;
	float b=15;
	
	void *ptr;
	ptr=&a;
	void *pntr;
	pntr=&b;
	
//	printf("The value of a is %d", *ptr); //HERE IT'LL NOT BE PRINTED AS VOID IS NOT A OBJECT TYPE(DATATYPE)

	printf("The value of a is %d\n", *((int *)ptr));
//		                           Here I've typecasted the pointer that it is like a int * pointer int type pointer now  it'll run  

	printf("The value of a is %.3f", *((float *)pntr));

	return 0;
}
