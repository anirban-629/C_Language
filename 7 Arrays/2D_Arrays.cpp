//	      WITHOUT ONE DIMENSIONAL ARRAY IT MAY BE 2D OR MULTIPLE DIMENSION ARRAYS ARE USE TO MAKE A TABLE PATTERN

#include<stdio.h>
int main(){
	int i,j;
	int arr[2][4]={{1,2,3,4},  //Here arr[2][4] is a 2d Array to make matrix shape 
	               {4,3,2,1}};
	               
	for(i=0;i<2;i++){       // As this is for ROW
		for(j=0;j<4;j++){   // This is for COLOUMN
		printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
return 0;
}

