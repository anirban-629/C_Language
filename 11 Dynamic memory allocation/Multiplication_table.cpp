#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	int *ptr;
	int n,i;
	printf("Enter the number to get it's Multiplication Table: ");
	scanf("%d", &n);
	ptr=(int *)calloc(10,sizeof(int));
//	ptr=(int *)malloc(10*sizeof(int));
	for(i=1;i<=10;i++){
		printf("%d X %d = %d\n",n,i,n*i);
	}
	printf("Multiplication Table upto 15 of %d is-->>\n",n);
	ptr=(int *)realloc(ptr,15*sizeof(int));
	for(i=1;i<=15;i++){
		printf("%d X %d = %d\n",n,i,n*i);
	}
return 0;
}
