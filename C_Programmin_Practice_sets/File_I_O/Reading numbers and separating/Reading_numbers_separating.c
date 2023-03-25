#include<stdio.h>
#include <string.h>
int main(){
  FILE *ptr;

  int arr[100],i,n;

  printf("How many numbers you want to add: ");
  scanf("%d",&n);

  ptr=fopen("all.txt","r");

  for(i=0;i<n;i++){
    fscanf(ptr,"%d",arr[i]);
    }

    for(i=0;i<n;i++){
      printf("%d\n",arr[i]);
    }

  return 0;
}
