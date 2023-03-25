#include<stdio.h>
int main(){
	//	char str[]={'A','N','I','R','B','A','N','\0'}; 
	char str[]="ANIRBAN";
	char *ptr=str;
	while (*ptr!='\0'){
		printf("%c", *ptr);
		ptr++;
	}
return 0;
}



