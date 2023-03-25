#include<stdio.h>
#include<string.h>
struct employee{
  char name[16];
  float salary;
  int id;
  float exprnc_yr;
};
int main(){
  char name1[15],name2[15],name3[15];
  struct employee e1,e2,e3;
   printf("Enter Employee 1's name: \n");
   gets(name1);
   strcpy(e1.name,name1);
   printf("Enter Employee 1's id: \n");
   scanf("%d",&e1.id);
   printf("Enter Employee 1's salary: \n");
   scanf("%f",&e1.salary);
   printf("Enter Employee 1's Experience year: \n");
   scanf("%f",&e1.exprnc_yr);


getchar();
   printf("Enter Employee 2's name: \n");
   gets(name2);
   strcpy(e2.name,name2);
   printf("Enter Employee 2's id: \n");
   scanf("%d",&e2.id);
   printf("Enter Employee 2's salary: \n");
   scanf("%f",&e2.salary);
   printf("Enter Employee 2's Experience year: \n");
   scanf("%f",&e2.exprnc_yr);


getchar();
   printf("Enter Employee 3's name: \n");
   gets(name3);
   strcpy(e3.name,name3);
   printf("Enter Employee 3's id: \n");
   scanf("%d",&e3.id);
   printf("Enter Employee 3's salary: \n");
   scanf("%f",&e3.salary);
   printf("Enter Employee 3's Experience year: \n");
   scanf("%f",&e3.exprnc_yr);


   printf("\nEmployee 1\n");
   printf("Name: %s\n",e1.name);
   printf("ID: %d\n",e1.id);
   printf("Salary: %.2f\n",e1.salary);
   printf("Experience year: %.1f\n",e1.exprnc_yr);

   printf("\nEmployee 2\n");
   printf("Name: %s\n",e2.name);
   printf("ID: %d\n",e2.id);
   printf("Salary: %.2f\n",e2.salary);
   printf("Experience year: %.1f\n",e2.exprnc_yr);

   printf("\nEmployee 3\n");
   printf("Name: %s\n",e3.name);
   printf("ID: %d\n",e3.id);
   printf("Salary: %.2f\n",e3.salary);
   printf("Experience year: %.1f\n",e3.exprnc_yr);


  return 0;
}
