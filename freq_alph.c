#include<stdio.h>
#include<string.h>
int main()
{
 char str[30];
 int i,j,length,count;
 printf("Enter the string:");
 scanf("%[^\n]",str);
 length= strlen(str);
 for (i=0;i<length;i++)
 {
  count = 1;
  if (str[i]!= '\0')
  {
   for(j=i+1;j<length;j++)
   {
    if (str[i]==str[j])
    {
     count++;
     str[j]='\0';
    }
   }
   printf("%c:%d\n",str[i],count);
  }
 }
 return 0;
}
