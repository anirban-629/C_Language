#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
struct employee{
	char name[10];
	int code;
	float salary;
};
int main(){
	struct employee facebook = {"Haryy", 100, 35.47};
	printf("Name is: %s \n",facebook.name);
	printf("Code is: %d \n",facebook.code);
	printf("Salary is: %.2f \n",facebook.salary);
return 0;
}




