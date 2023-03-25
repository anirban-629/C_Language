#include<stdio.h>
#include<conio.h>
#include<string.h>

//												******FIRST RUN THE STRUCTUR THEN RUN THE UNION******

//struct student{
//	int id;
//	int marks;
//	int fav_char;
//	char name[40];
//	
//};
//
//int main(){
//	struct student s1;
//	s1.fav_char='c';
//	s1.id=10;
//	s1.marks=30;
//	strcpy(s1.name,"Anirban");
//	
//	printf("Your fav character %c\n",s1.fav_char);
//	printf("Your id %d\n",s1.id);
//	printf("Your marks %d\n",s1.marks);
//	printf("Your name %s\n",s1.name);
//	
//	return 0;
//}



union student{
	int id;
	char name[40];
	int marks;
	int fav_char;
	
};

int main(){
	union student s1;
	s1.fav_char='c';
	s1.id=10;
	s1.marks=30;
	strcpy(s1.name,"Anirban");	 // only that portion you are writing in the last only this will be executed properly and other will be corrupted run and see....
								 // now exchange the name to fav_char and see it will executed and others will be corupted ...
	
	printf("Your fav character %c\n",s1.fav_char);
	printf("Your id %d\n",s1.id);
	printf("Your marks %d\n",s1.marks);
	printf("Your name %s\n",s1.name);
	
	return 0;
}




