#include<stdio.h>
#include<string.h>

struct student{
	char name[100];
	int roll;
	int code;
};

int main(){
    struct student gmit, heritage, techno;
    
    strcpy(gmit.name, "Anirban Mishra");
	strcpy(heritage.name, "Ankit Samanta");
	strcpy(techno.name, "Sourin Ghosh");
    
	gmit.roll = 1;
	heritage.roll = 2;
	techno.roll = 3;
	
	gmit.code = 11;
	heritage.code = 22;
	techno.code = 33;
	
	printf("Student of GMIT: ");
	printf("\nName: %s\nRoll: %d\nCode: %d\n\n",gmit.name,gmit.roll,gmit.code);
	
	printf("Student of HERITAGE: ");
	printf("\nName: %s\nRoll: %d\nCode: %d\n\n",heritage.name,heritage.roll,heritage.code);
	
	printf("Student of TECHNO: ");
	printf("\nName: %s\nRoll: %d\nCode: %d\n",techno.name,techno.roll,techno.code);
	
return 0;
}

