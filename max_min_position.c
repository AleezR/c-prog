#include <stdio.h>
int main()
{
 int i,n,max,min,p1=0,p2=0;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 int a[n];
 printf("Enter the value:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 max=a[0];
 min=a[0];
 for(i=1;i<n;i++)
 {
  if (a[i]>max)
  {
   max = a[i];
   p1=i;
  }
  if (a[i]<min)
  {
   min = a[i];
   p2=i;
  }
 }
 printf("The maximum value is %d and is at %d\n",max,p1);
 printf ("The minimum value is %d and is at %d",min,p2);
 return 0;
}
