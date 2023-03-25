//which address more than one variable
//like i is a variabe then j then k
//but at first have to use 
//int i  > int *j=___ > int **k=____ ------> That is the rythem

#include<stdio.h>
int main(){
	int i =34;
	int *j = &i;
	int **k= &j;
//	printf("The Value of i is   ---> %d\n", i);
	printf("The Value of i is   ---> %d\n", *j);
	printf("The Value of j is   ---> %u\n", *(&j)); 
	printf("The Value of k is   ---> %u\n", &j); 
//	printf("The Address of i is ---> %u\n", &i);    
//	printf("The Address of i is ---> %u\n", j);     
//	printf("The Address of j is ---> %u\n", &j); 
return 0;
}
