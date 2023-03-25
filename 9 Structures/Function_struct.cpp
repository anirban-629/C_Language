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
	void show (struct employee emp){
		printf("Salary: %f\n", emp.salary);
				printf("code: %d\n", emp.code);
		printf("Name: %s\n", emp.name);		
	}
	
int main(){
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
	ptr->salary= 13.45;
	ptr->code=100;
	strcpy(ptr->name, "Anirban");
    show(e1);
return 0;
}




