
#include<stdio.h>
struct employee{
  char name[20];
  int age;
  char id;
  int code;
};
int main(){
  int n,i;
  struct employee e[100];
  printf("How many Employees you want to add: ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
    printf("\nEmployee %d\n",i+1);
    getchar();
    printf("Name -> ");
    gets(e[i].name);
    printf("Age -> ");
    scanf("%d",&e[i].age);
    getchar();
    printf("ID -> ");
    scanf("%s",&e[i].id);
    printf("Code -> ");
    scanf("%d",&e[i].code);
  }
  for(i=0;i<n;i++){
    printf("\nEmployee %d\n",i+1);
    printf("Name -> %s\n",e[i].name);
    printf("Age -> %d\n",e[i].age);
    printf("ID -> %s\n",e[i].id);
    printf("Code -> %d\n",e[i].code);
  }

  return 0;
}
