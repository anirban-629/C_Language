#include<stdio.h>
#include<string.h>
int main(){
  FILE *ptr;
  int i=0,j=1,k=0;
  char c;
  ptr=fopen("prgrm.txt","r");
  c=fgetc(ptr);
  while(c!=EOF){
    c=fgetc(ptr);
    k=k+1;
    if(c=='\n'){
      i++;
    }
    if(c==' '){
      j++;
    }
  }
  fclose(ptr);
  printf("\nThere are %d lines in the file..\n",i);
  printf("\nThere are %d words in the file..\n",j);
  printf("\nThere are %d letters in the file..\n",k);
  return 0;
}
