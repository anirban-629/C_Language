#include<stdio.h>
int main(){
	int i;
	int *j=&i;
	printf("Enter the value               ----> ");
	scanf("%d", &i);
	printf("The value of i is             ----> %d\n", *j);
	printf("The value of address of i is  ----> %u\n", &i);
return 0;
}
 
