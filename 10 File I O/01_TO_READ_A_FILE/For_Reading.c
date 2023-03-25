#include<stdio.h>
#include<string.h>
int main(){
	FILE *ptr; 				//with this you can read write in console
//	FILE *ptr=NULL;	// but if you use this then nothing will be shown in console
	char str[100];
	ptr=fopen("reading_file.txt","r");
	fscanf(ptr,"%s", str);
	printf("---->>>> %s", str); //--??IN --->>> HERE ONLY ONE WORD WILL BE PRINTED
//								WHITESPACE IS NOT ALLOWED USE UNDERSCORE
    fclose(ptr);
return 0;
}
