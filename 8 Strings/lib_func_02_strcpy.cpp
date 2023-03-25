#include<stdio.h>
#include<string.h>
int main(){
	char a[10] = "Anirban";
	char s2[50];
	strcpy(s2,a); // here ""strcpy(Target,source)"" -->> Defined
	printf("The s2 is %s",s2);
return 0;
}
