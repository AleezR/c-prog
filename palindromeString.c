#include<stdio.h>
#include<string.h>
int isPal(char str[])
{
 int left=0,right=strlen(str)-1;
 while(left<right)
 {
  if (str[left] != str[right])
  return 0;
  left++;
  right--;
 }
return 1;
}
int main()
{
 char str[100];
 printf("Enter a string:");
 scanf("%s",str);
 if (isPal(str))
  {
   printf("It is Palindrome");
  }
  else
  {
   printf("It is not a Palindrome");
  }
  return 0;
}
