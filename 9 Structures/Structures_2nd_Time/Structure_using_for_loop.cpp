#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
struct employee{
	int code;
	int roll;
	int age;
};

int main(){
	int i=0,n;
	struct employee comp[100];
	
	printf("How many employee you want to take: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		printf("\nEnter Code for employee %d: ",i+1);
		scanf("%d",&comp[i].code);
		printf("Enter Roll for employee   %d: ",i+1);
		scanf("%d",&comp[i].roll);
		printf("Enter Age for employee    %d: ",i+1);
		scanf("%d",&comp[i].age);
	}
	
	for(i=0;i<n;i++){
		printf("\nCode for Employee <%d>: %d\n",i+1,comp[i].code);
		printf("Roll for Employee <%d>  : %d\n",i+1,comp[i].roll);
		printf("Age for Employee <%d>   : %d\n",i+1,comp[i].age);
	}
return 0;
}

