#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr=(int *)malloc(6* sizeof(int));
	
	for(int i=0;i<5;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<5;i++){
		printf("Your number(%d) is : %d\n",i+1,ptr[i]);
	}
	
    //Reallocate
    // if space is insufficiant then for more space we can use this..
    // it's used to allocate memory in a new size using a new size to previous ptr


    ptr=(int *)realloc(ptr,5 *sizeof(int)); // Capable of storing new integers
	for(int i=0;i<5;i++){
		printf("Enter the more 5: %d number: ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<5;i++){
		printf("Your number(%d) is : %d\n",i+1,ptr[i]);
	}
return 0;
}
