#include <stdio.h>
int main()
{
int i,n;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 int a[n];
 printf("Enter the value:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int b[n];
 for(i=0;i<n;i++)
 {
  b[i] = a[i];
 }
 printf("Elements in array b: ");
    for (i = 0; i < n; i++) 
    {
	printf("%d ", b[i]); 
    }
 return 0;
}
