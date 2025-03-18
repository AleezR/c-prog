#include <stdio.h>
int isPalindrome(int num){
 int reversed = 0;
 int orginal= num;
 int remainder;
 
 while(num>0){
 remainder = num%10;
 reversed = reversed*10+remainder;
 num/=10;
 }
 return(orginal==reversed);
 }
 int main()
 {
 int num;
 printf("Enter the number");
 scanf("%d",&num);
 if (isPalindrome(num))
 {
  printf("It is Palindrome");
 }
 else
 {
  printf("It is not a Palindrome");
 }
 return 0;
}
