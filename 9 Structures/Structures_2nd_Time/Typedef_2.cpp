#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct employee{
	char name[10];
	int code;
	float salary;
	
}empl;	//empl = employee
//	void show (struct employee emp)
	void show (empl emp){
		printf("Salary: %f\n", emp.salary);
				printf("code: %d\n", emp.code);
		printf("Name: %s\n", emp.name);		
	}
	
int main(){
//	struct employee e1;
//	struct employee *ptr;
	empl e1;
	empl *ptr;
	ptr=&e1;
	ptr->salary= 13.45;
	ptr->code=100;
	strcpy(ptr->name, "Anirban");
    show(e1);
    
return 0;
}




