#include<stdio.h>
int factorial(int n){
int fact = 1;
for(int i=1;i<=n;i++){
fact = fact*i;
}
return fact;
}
int main(){
int num;
printf("Enter number:");
scanf("%d",&num);
if(num<0)
{
printf ("Factorial not defined");
}
else
{
printf ("factorial is %d" , factorial(num));
}
return 0;
}
