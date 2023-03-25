#include<stdio.h>
void abc(int a){
	printf("The address of a is %d\n", &a);
}
int main(){
	int i=4;
	printf("The value of i is %d\n", i);
	abc(i);
	printf("The address of i is %d\n", &i);
return 0;
}
