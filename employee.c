#include<stdio.h>
struct employee{
	char name[50];
	int id;
	float salary;
	};
int main(){
 int n;
 printf("Enter the number of employees:");
 scanf("%d",&n);
 struct employee emp[n];
 for(int i=0;i<n;i++)
 {
 printf("ENTER DETAILS OF EMPLOYEE %d\n",i+1);
  printf("Enter the name of employee:");
  scanf("%s",emp[i].name);
  printf("Enter the ID of employee:");
  scanf("%d",&emp[i].id);
  printf("Enter the salary of employee");
  scanf("%f",&emp[i].salary);
 }
 printf("\n employee details:\n");
 for(int i=0;i<n;i++)
 {
  printf("NAME:%s\n",emp[i].name);
  printf("ID:%d\n",emp[i].id);
  printf("SALARY:%.2f\n",emp[i].salary);
 }
 return 0;
 }
