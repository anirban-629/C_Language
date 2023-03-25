//																	malloc---> memory allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr=(int *)malloc(6* sizeof(int)); //This is the dynamic memory allocation which allocate memory to store
	//here as per this code 6 memory has been allocated in th meomory 
	//here 6 is the number of elements and size is 6 X size of integer constant
	for(int i=0;i<5;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&ptr[i]);
		//you can make array here like this
	}
	for(int i=0;i<5;i++){
		printf("Your number(%d) is : %d\n",i+1,ptr[i]);
	}
return 0;
}
