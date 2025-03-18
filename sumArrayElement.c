#include<stdio.h>
int sum(int read[],int n);
int main()
{
int n,i,result;
printf("Enter the size of array:");
scanf("%d",&n);
int read[n];
printf("Enter the elements of array:");
for(i=0;i<n;i++)
{
scanf("%d",&read[i]);
}
result=sum(read,n);
printf("Sum=%d",result);
return 0;
}
int sum(int read[],int n)
{
int sum=0,i;
for(i=0;i<n;i++)
{
sum+=read[i];
}
return sum;
}
