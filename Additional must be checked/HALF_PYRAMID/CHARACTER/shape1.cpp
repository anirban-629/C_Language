#include<stdio.h>
int main(){
	int i,j,k;
	char n='A';
	printf("Enter the length: ");
	scanf("%d", &k);
	for(i=1;i<=k;i++){
		for(j=1;j<=i;j++){
			printf("%c",n);
		}
		n++;
		printf("\n");
	}
	return 0;
}
