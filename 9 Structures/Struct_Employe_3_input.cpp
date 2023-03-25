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
	struct employee e1,e2,e3;
	
		printf("Enter the name of the Employe 1:");
	scanf("%s", e1.name);
	printf("Ente the code of the Employee 1: ");
	scanf("%d", &e1.code);
	printf("Enter the salary of the Employee 1: ");
	scanf("%f", &e1.salary);
	
		printf("Enter the name of the Employe 2:");
	scanf("%s", e2.name);
	printf("Ente the code of the Employee 2: ");
	scanf("%d", &e2.code);
	printf("Enter the salary of the Employee 2: ");
	scanf("%f", &e2.salary);
	
		printf("Enter the name of the Employe 3:");
	scanf("%s", e3.name);
	printf("Ente the code of the Employee 3: ");
	scanf("%d", &e3.code);
	printf("Enter the salary of the Employee 3: ");
	scanf("%f", &e3.salary);
return 0;
}
