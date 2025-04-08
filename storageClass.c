#include<stdio.h>
void mix(){
auto int a=0;
static int b=1;
a++;
b++;
printf("Auto storage class,a=%d \nStatic storage class,b=%d\n",a,b);
}
void regis_demo(){
register int c=1;
printf("Register storage class,c=%d\n",c);
}
int d =1;
void ext_demo(){
extern int d;
printf("External storage class,d=%d\n",d);
}
int main(){
mix();
regis_demo();
ext_demo();
return 0;
}
