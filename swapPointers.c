#include<stdio.h>
int main(){
	int a,b,temp;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	int *p,*q,*t;
	p=&a;
	q=&b;
	t=&temp;
	printf("\nVALUES BEFORE SWAPPING\n");
	printf("First number=%d\nSecond number=%d",*p,*q);
	//PROCESS OF SWAPPING
	*t=*p;
	*p=*q;
	*q=*t;
	printf("\nVALUES AFTER SWAPPING\n");
	printf("First number=%d\nSecond number=%d",*p,*q);
	return 0;
}
	
