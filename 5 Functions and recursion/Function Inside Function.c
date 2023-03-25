//                        										      or
//                                                  		Function inside function


#include<stdio.h>
	void goodmorning();
	void goodafternoon();
	void goodnight();

	int main(){
		goodmorning();   // Direct call and indirect call---->  gdaftrnn and gdn8
return 0;
}
void goodmorning(){
	printf("Good Morning Anirban\n");
		goodafternoon();
}
void goodafternoon(){
	printf("Good Afternoon Anirban\n");
	     	goodnight();
}
void goodnight(){
	printf("Good Night Anirban\n");
}
