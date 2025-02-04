#include<stdio.h>
int main()
{
  int a,b,sum,diff,mul,mod,div;
  char choice;
  printf("Enter a number:");
  scanf("%d",&a);		//input of first number
  printf("Enter a number:");
  scanf("%d",&b);		//input of second number
  printf("Enter the required operation:");
  scanf(" %c",&choice);		//input the operators
  switch(choice)
  {
    case '+':
      sum= a+b;
      printf("THE SUM IS : %d",sum);
    break;
    case '-':
      diff= a-b;
      printf("THE DIFFERENCE IS : %d",diff);
    break;
    case '*':
      mul= a*b;
      printf("THE PRODUCT IS : %d",mul);
    break;
    case '/':
    if(a>b)
    {
    div= a/b;
      printf("THE DIVISION IS : %d",div);
  
    }
    else
    {
    printf("INVALID ENTRY");
    }
    break;
    case '%':
      mod= a%b;
      printf("THE MODULUS IS : %d",mod);
    break;
    default:
    printf("INVALID OPERATOR");
      
  }
 return 0;
}
