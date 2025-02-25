#include<stdio.h>
#include<string.h>
int main()
{
 char str1[30],str2[30];
 printf("Enter the string:");
 scanf("%s",str1);
 printf("Enter the string:");
 scanf("%s",str2);
 if (strcmp(str1,str2)==0)
 {
  printf("The strings are same");
 }
 else
 {
  printf("They are different"); 
 }
 return 0;
}
 
