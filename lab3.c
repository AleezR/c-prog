#include <stdio.h>
int main()
{
 int i, num, fact=1;
 printf("ENTER THE NUMBER:");
 scanf("%d",&num);
 if(num<0)
 {
  printf("Wrong entry");
 }
 else if (num==0)
 {
  printf("Factorial = 1");
 }
 else
 {
  for(i=1;i<=num;i++)
   fact= fact*i;
   printf("FACTORIAL IS:%d",fact);
 }
 return 0;
}
