#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct boy{
  char name[20];
  int age;
};

int main(){
  struct boy anirban = {"Anirban",10};
  printf("Using DOT Operator:\nName = %s\nAge = %d\n\n",anirban.name,anirban.age);

  // struct boy *ptr = &anirban;
  struct boy *ptr;
  ptr=&anirban;
  printf("Using POINTER Dereferenceing:\nName = %s\nAge = %d\n\n",(*ptr).name,(*ptr).age);

  printf("Using ARROW Operator:\nName = %s\nAge = %d\n\n",ptr->name,ptr->age);

  return 0;
}
