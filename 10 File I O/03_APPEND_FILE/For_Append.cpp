#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(){
	FILE *ptr; 				//with this you can read write in console
//	FILE *ptr=NULL;			// but if you use this then nothing will be shown in console

//				****FOR APEND****

//IN APPEND MODE STATEMENTS WILL ADD RESPECTIVELY NOTHING WILL BE DELETED

				char str[100]="Anirban ";
				// gets(str);
				ptr=fopen("reading_file_add _content.txt","a");
				fprintf(ptr,"%s", str);
return 0;
}

//NOW CHECK THE .txt FILE
