 #include<stdio.h>
int main(){
	int marks[5];
	for(int a=0; a<5; a++)
	{
			printf("Enter the value of marks for student %d : ", a+1);
	scanf("%d", &marks[a]);
	}
	for(int a=0; a<5; a++)
	{
			printf("The value of marks for student %d is : %d \n", a+1, marks[a]);
	}
return 0;
}
