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
	int a;
	float s;
	char n;
	printf("Enter your employement code: ");
	scanf("%d", &a);
    printf("Enter your name: ");
    gets("%s", &n);
	printf("Enter your salary: ");
	scanf("%f", &s);

	struct employee e1;
	e1.code = a;
	e1.salary = s;
	strcpy(e1.name, "n");
	
	printf("The name of the Employee is %s\n", e1.name);		
	printf("The code of the Employee is %d\n", e1.code);
	printf("The salary of the Employee is %.3f", e1.salary);

return 0;
}
