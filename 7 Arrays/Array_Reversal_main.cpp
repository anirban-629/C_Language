//	WAP to execute a reverse array...
//	array{1,2,3,4,5,6,7,8,9,0}
//	output should be: {1,2,3,4,5,6,7,8,9,0}

void reverse_arr(int array[]);

#include<stdio.h>
int main(){
	int i, arr[]={00,10,20,30,40,50,60,70,80,90};
	printf("Array numbers Before Reverseing it: \n");
	for(i=0;i<10;i++){
		printf("<%d>--> %d\n",i+1,arr[i]);
	}
	reverse_arr(arr);
	return 0;
}
void reverse_arr(int array[]){
	int a, i, exch;
	for(i=0;i<10/2;i++){
	exch= array[i];
	array[i]= array[9-i];
	array[9-i]=exch;
	}
	printf("Array numbers After Reverseing it: \n");
	for(i=0;i<10;i++){
	printf("<%d>--> %d\n",i+1,array[i]);
	}
}
