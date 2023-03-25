#include<stdio.h>
#include<string.h>

struct student{
	char name;
	int  age;
};

int main(){
	int i=0,n;
	struct student gmit[1000];
	printf("Enter the number of students you want to add: ");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Enter data student %d: ",i+1);
		scanf("%d", &gmit[i]);
	}
	printf("%d", gmit);
	
return 0;
}

