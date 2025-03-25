//EXPERIMENT 12
#include<stdio.h>
#define pi (3.14159)
#define AREA_OF_CIRCLE(r) (pi*r*r)
#define SURFACEAREA_OF_CYLINDER(r,h) (pi*r*(r+h))
int main()
{
 float r,h,area,surface_area;
 printf("Enter the radius of circle and cylinder");
 scanf("%f",&r);
 printf("Enter the height of cylinder");
 scanf("%f",&h);
 area=AREA_OF_CIRCLE(r);
 surface_area=SURFACEAREA_OF_CYLINDER(r,h);
 printf("The area of circle is:%f\n",area);
 printf("The surface area of cylinder is:%f\n",surface_area);
 return 0;
 }
