#include<stdio.h>
#include<string.h>
int main(){
  int i=0;
  int *i2;
  while (i<4555){
    i2=malloc(5000*sizeof(int));
    printf("Anirban\n");
    if(i%100==0){
      getchar();
    }
    free(i2);
    i++;
  }
  return 0;
}
