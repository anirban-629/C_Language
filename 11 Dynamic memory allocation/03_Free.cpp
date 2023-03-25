// Defination -->>

//	A memory which is allocated by calloc or malloc it cannot be de-allocated automatically thats why we use free() function to de-allocate the memory after use
//	that means a memory is taken we have to free the memory after the work thats why we use the free() function...
//
//	process-->> 1. Run the program and go to the task manager and see the memory while running the exe file. -> without using free()
//              2. Now add the free() and check in the task manager you can see the differnece and you will understand

//				*. you can use unlimited times of loop but no extra memory will be needed beacuse using this free() function 
//				   the memory that will be allocated will be automatically deallocated after using it

#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int *ptr1;
	int n=6, i;
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		ptr1=(int *)malloc(n*sizeof(int));  //-->> In this using that we are taking memory dynamically into a loops which is going to run  thousand of times
//										      for this the memory consumption will increased too much go and do the process and notice what is happening
		printf("Enter number(%d): ",i+1);
		scanf("%d",&ptr[i]);
		free(ptr1);
	}
	for(i=0;i<6;i++)
	printf("Number(%d) --> %d\n\a", i+1, ptr[i]);
return 0;
}

