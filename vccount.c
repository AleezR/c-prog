#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int i,j,v_count=0,c_count=0,length;
  printf("Enter a string:");
  scanf("%s",str);
  length=strlen(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    {
      v_count++;
    }
    else
    {
      c_count++;
    }
  }
  printf("Vowels:%d",v_count);
  printf("Consonants:%d",c_count);
  return 0;
}
