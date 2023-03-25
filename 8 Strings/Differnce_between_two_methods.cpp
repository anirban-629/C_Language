#include<stdio.h>
int main(){
	char *ptr="Rahul";   // --->>Applicable
//	char ptr[]="Rahul"; 
	ptr="Anirban";    //This will be applicable when you will use pointer not array
	printf("%s", ptr); // '%s' format specifier is for string
return 0;
}
