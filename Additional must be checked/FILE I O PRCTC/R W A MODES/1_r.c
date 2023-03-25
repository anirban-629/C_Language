#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	FILE *ptr;
	ptr=fopen("1_2_3_rwa.txt","r");
	fscanf(ptr,"%s",str);
	printf("%s",str);
	return 0;
}
