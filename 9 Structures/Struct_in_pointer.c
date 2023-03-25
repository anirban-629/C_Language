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
	struct employee e1;
	struct employee *ptr;
	ptr=&e1;
	(*ptr).salary= 13.45; //you can also do this  ptr->salary= 13.45;
//	ptr->salary= 13.45;
printf("Your salary is: %f", e1.salary);
return 0;
}




