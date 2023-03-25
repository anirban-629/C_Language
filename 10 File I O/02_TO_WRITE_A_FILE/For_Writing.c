#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	FILE *ptr; 				//with this you can read write in console
//	FILE *ptr=NULL; // but if you use this then nothing will be shown in console

//
//												****FOR WRITING****

//IN WRITING MODE WHICH STATEMENTS YOU ARE GOING TO INPUT THAT WILL
//MODIFIED(MEANS THAT STAEMENT WILL BE THE FINAL AND ONLY THAT WILL
//BE PRINTED OTHERS WILL BE DELETED

												char str[100];
												gets(str);
												ptr=fopen("writing_file.txt","w");
												fprintf(ptr,"%s", str);

return 0;
}

//NOW GO AND CHECK THE .txt
