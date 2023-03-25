#include<stdio.h>
int main(){
	
	int i, arr[]={00,10,20,30,40,50,60,70,80,90};
	
	printf("Array numbers Before Reverseing it: \n");
	for(i=0;i<10;i++){
		printf("<%d>--> %d\n",i+1,arr[i]);
	}
	printf("Array numbers After Reverseing it: \n");
	for(i=9;i>=0;i--){	
	printf("--> %d\n",arr[i]);
	}
	return 0;
}

