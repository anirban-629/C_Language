#include<stdio.h>
int main(){
	int i,j,n=5;
//	printf("Enter the length: ");
//	scanf("%d", &n);
	for(i=5;i>=1;i--){
		for(j=5;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
