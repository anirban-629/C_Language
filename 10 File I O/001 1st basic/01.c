#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	FILE *ptr; 				 with this you can read write in console 
	
	FILE *ptr=NULL;			 but if you use this then nothing will be shown in console
	
				****FOR READING****

IN READING MODE WE CAN ONLY USE TO READ

				char str[100];
				ptr=fopen("sample.txt","r");
				fscanf(ptr,"%s", str);
				//It'll scan ptr and will store it in str
				printf("---->>>> %s", str);  --??IN --->>> HERE ONLY ONE WORD WHITESPACE WILL NOT ALOOWED USE UNDERSCORE

											****FOR WRITING****
	
IN WRITING MODE WHICH STATEMENTS YOU ARE GOING TO INPUT THAT WILL 
MODIFIED(MEANS THAT STAEMENT WILL BE THE FINAL) AND ONLY THAT WILL 
BE PRINTED OTHERS WILL BE DELETED
	
											char str[100];
												gets(str);
												ptr=fopen("sample.txt","w");
												fprintf(ptr,"%s", str);
								
												
				****FOR APEND****
	
IN APPEND MODE STATEMENTS WILL ADD RESPECTIVELY NOTHING WILL BE DELETED
	
				char str[100];
				gets(str);
				ptr=fopen("sample.txt","a");
				fprintf(ptr,"%s", str);
return 0;
}
