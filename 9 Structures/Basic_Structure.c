#include<stdio.h>
//#include<conio.h>
//#include<stdlib.h>
//#include<math.h>
#include<string.h>
struct employee{
	int code;
	float salary;
	char name[10];
};
int main(){
	struct employee e1;
	e1.code = 100;
	e1.salary = 35.45;
	strcpy(e1.name, "Anirban");
	
	printf("The name of the Employee is %s\n", e1.name);		
	printf("The code of the Employee is %d\n", e1.code);
	printf("The salary of the Employee is %.3f", e1.salary);

return 0;
}
