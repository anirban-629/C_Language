#include<stdio.h>
#include<stdlib.h>
int main(){
	float *ptr;
	ptr=(float *)malloc(6* sizeof(float)); //This is the dynamic memory allocation which allocate memory to store
	//here as per this code 6 memory has been allocated in th meomory
	for(int i=0;i<5;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%f",&ptr[i]);
		//you can make array here like this
	}
	for(int i=0;i<5;i++){
		printf("Your number(%d) is : %f\n",i+1,ptr[i]);
	}
return 0;
}
