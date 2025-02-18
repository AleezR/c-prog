#include<stdio.h>
#define pi 3.14
int main()
{
  int area;
  float radius;
  printf("Enter the radius of the circle");
  scanf("%f",&radius);
  area = pi*radius*radius;
  printf("The area of the circle is%d",area);
return 0;
}
