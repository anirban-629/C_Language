#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n;
	printf("Enter the numbers of elemnet you want to input:\n");
	scanf("%d", &n);
	ptr=(int *)calloc(n, sizeof(int)); 
	for(int i=0;i<n;i++){
		printf("Enter the %d number: ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(int i=0;i<n;i++){
		printf("Your number(%d) is : %d\n",i+1,ptr[i]);
	}
return 0;
}
