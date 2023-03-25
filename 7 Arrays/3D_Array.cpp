#include<stdio.h>
int main(){
	int i,j,k;
	int arr[3][4][4]={{1,2,3,4},{4,3,2,1},{1,2,3,4}};
	for(i=0;i<3;i++){       
		for(j=0;j<1;j++){  
		    for(k=0;k<4;k++){
		printf("%d ",arr[i][j][k]);
		    }
	    }
	printf("\n");
	}
return 0;
}
