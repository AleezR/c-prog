#include<stdio.h>
int main()
{
int num1, num2,temp;
printf("Enter first number:");
printf("Enter second number:");
scanf( "%d""%d",&num1,&num2);
//BEFORE SWAPPING
printf("num1=%d and num2=%d",num1,num2);
temp = 0;
num1 = num2;
num2 = 0;
//AFTER SWAPPING
printf("num1=%d and num2=%d",num1,num2);
return 0;
}
