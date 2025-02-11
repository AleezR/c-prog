#include <stdio.h>
int main()
{
 int i,n,key,flag=0,p=0;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 int a[n];
 printf("Enter the value:");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 printf("Enter the value to search:");
 scanf("%d",&key);
 for(i=0;i<n;i++)
 {
  if (key==a[i])
   {
    flag=1;
    p=i;
    break;
   }
  }
   if (flag==0)
    {
     printf("Element is not found");
    }
   else
    {
     printf("Element %d is found at %d",key,p);
    }
 
return 0;
}
