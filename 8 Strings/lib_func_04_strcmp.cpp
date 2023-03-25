#include<stdio.h>
#include<string.h>
int main(){
	char s1[50]="Anirban ";
	char s2[50]="Mishra";
	int val=strcmp(s1,s2); // strcmp is used to differnce between strings 
	//it mainly  works upon the ascii value of 1st and 2nd word's letter
	//exmpl: M is after A that's why the value will be -1
	printf("The value is %d",val);
return 0;
}
