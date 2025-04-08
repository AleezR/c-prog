#include<stdio.h>
struct student{
	char name[50];
	int roll_no;
	float marks[3];
	};
int main(){
 int n;
 printf("Enter the number of students:");
 scanf("%d",&n);
 struct student s[n];
 for(int i=0;i<n;i++)
 {
 printf("ENTER DETAILS OF STUDENT %d\n",i+1);
  printf("Enter the name of student:");
  scanf("%s",s[i].name);
  printf("Enter the roll no. of student:");
  scanf("%d",&s[i].roll_no);
  printf("Enter the marks of students");
  for(int j=0;j<3;j++)
  {
  scanf("%f",&s[i].marks[j]);
  }
  }
  printf("\n DISPLAY THE DETAILS OF STUDENTS:\n");
  for (int i=0;i<n;i++)
  {
  float total=0;
  for(int j=0;j<3;j++)
  {
  total += s[i].marks[j];
  }
  float average= total/3;
  printf("NAME= %s\n",s[i].name);
  printf("ROLL NUMBER= %d\n",s[i].roll_no);
  printf("TOTAL MARKS= %.2f\n",total);
  printf("AVERAGE MARKS= %.2f\n",average);
  }
  return 0;
 }
 
