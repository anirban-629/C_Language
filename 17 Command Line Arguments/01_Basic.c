#include<stdio.h>
int main(int argc, char const *argv[]) {
  int n,i;
  // printf("Argument Index no. %d is %s",argc,argv[0]);
  printf("How many numbers of Arguments you want to add: \n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      scanf("%s",argv[i]);
  }
  for(i=0;i<n;i++){
    printf("Argument no. %d is %s",argc,argv[i]);
  }
  return 0;
}
// use VS Code for this for manually add arguments