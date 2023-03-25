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
	struct employee Facebook[100];

 	Facebook[0].code = 100;
	Facebook[0].salary = 35.45;
	strcpy(Facebook[0].name, "Anirban");
	
	Facebook[1].code = 100;
	Facebook[1].salary = 35.45;
	strcpy(Facebook[1].name, "Anirban");
	
	Facebook[2].code = 100;
	Facebook[2].salary = 35.45;
	strcpy(Facebook[2].name, "Anirban");
	
	printf("Done");

return 0;
}



