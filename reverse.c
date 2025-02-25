//reverse a string
#include<stdio.h>
int main()
{
 char learn[30],temp;
 int i,j,length;
 printf("Enter the string:");
 scanf("%[^\n]",learn);
 //find the length of string
 for(length=0;learn[length]!='\0';length++);
  i=length-1;
  for(j=0;j<length/2;j++,i--)
  {
   temp=learn[i];
   learn[i]=learn[j];
   learn[j]=temp;
   
  }
  printf("The reversed string is:%s",learn);
  return 0;
}
   
