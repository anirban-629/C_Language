//																	calloc---> continuous allocation
#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	ptr=(int *)calloc(6, sizeof(int)); // here in this case calloc take 2 thing how many and size of a particular..
	for(int i=0;i<5;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&ptr[i]);
	}

	for(int i=0;i<5;i++){
		printf("Your number(%d) is : %d\n",i+1,ptr[i]);
	}
	
	
//	here if you compile and run this then we'll see that all values are 0 beacuse
//	calloc initialize all the values 0 by default
//	for(int i=0;i<5;i++){
//		printf("Your number(%d) is : %d\n",i+1,ptr[i]);
//	}
return 0;
}
