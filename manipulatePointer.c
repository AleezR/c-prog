#include <stdio.h>
int main(){
int a=10;
int *p,**q;
p=&a;
q=&p;
printf("Value of a is %d\n",a);
printf("Value of *p is %d\n",*p);
printf("Value of p is %d\n",**q);
return 0;
}
