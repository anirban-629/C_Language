#include<stdio.h>
//#include<conio.h>
int main(){
	int i;
	int marks[4];
	int *ptr;
	ptr = &marks[0];
	//ptr=marks;
	for(i=0 ;i<4; i++);{
		printf("Marks of student %d is : ", i+1);
		scanf("%d", ptr);
		ptr++;
	}
	for(i=0 ; i<4 ;i++);
	{
		printf("Marks of student %d is : %d\n", i+1, marks[i]);
	}

return 0;
}



