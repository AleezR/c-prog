#include<stdio.h>
int main()
{
  int a,b,c,largest;
  printf("Enter a number:");
  scanf("%d",&a);		//input of first number
  printf("Enter a number:");
  scanf("%d",&b);		//input of second number
  printf("Enter a number:");
  scanf("%d",&c);		//input of third number
  if (a>b&&a>c)
  {
    printf("The largest value is :%d\n",a);
  }
  else if (b>a&&b>c)
  {
    printf("The largest value is :%d\n",b);
  }
  else
  {
    printf("The largest value is :%d\n",c);
  }
}
