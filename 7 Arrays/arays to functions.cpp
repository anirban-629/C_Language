
#include<stdio.h>
void printarray(int *ptr, int n){
	for(int i=0; i<n; i++){
		printf("The value of element %d is %d\n", i+1, *(ptr+i));
	}
}
int main(){
	int arr[]= {0,1,2,3,4,5,6,7,8,9};
	printarray(arr,10);
 	return 0;
}
//start array  newly::::???????????
