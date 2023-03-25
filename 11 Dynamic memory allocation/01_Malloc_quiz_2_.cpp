#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr;
	int n, i;
	printf("Enter the number you want to print:\n");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		printf("Enter number(%d): ",i+1);
		scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	printf("Number(%d) --> %d\n\a", i+1, ptr[i]);
return 0;
}

