#include<stdio.h>
#include<string.h>

struct student{
	char name[10];
	int roll;
	int code;
	char grade[50];
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
	
	strcpy(gmit.grade,"A+");
	strcpy(heritage.grade,"B+");
	strcpy(techno.grade,"C+");
	
	printf("Student of GMIT: ");
	printf("\nName: %s\nRoll: %d\nCode: %d\nGrade: %s\n\n",gmit.name,gmit.roll,gmit.code,gmit.grade);
	
	printf("Student of HERITAGE: ");
	printf("\nName: %s\nRoll: %d\nCode: %d\nGrade: %s\n\n",heritage.name,heritage.roll,heritage.code,heritage.grade);
	
	printf("Student of TECHNO: ");
	printf("\nName: %s\nRoll: %d\nCode: %d\nGrade: %s",techno.name,techno.roll,techno.code,techno.grade);
	
return 0;
}

//                 THIS PROGRAM HAS A REARRANGEMENT MATTER JUST FIND IT OR IT'LL NOT RUN PROPERLY
