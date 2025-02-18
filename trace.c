#include <stdio.h>
int main(){
int i,j,r,c,sum;
printf("Enter the number of rows and columns:");
 scanf("%d%d",&r,&c);
 int a[r][c];
 printf("Enter the values of first matrix:");
 for (i=0;i<r;i++)
 {
  for (j=0;j<c;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 printf("Matrice is:\n");
 for (i=0;i<r;i++)
 {
  for (j=0;j<c;j++)
  {
   printf("%d\t",a[i][j]);
  }
  printf("\n");
 }
// Finding trace
 for (i=0;i<r;i++)
  {
   for (j=0;j<c;j++)
   {
   if (i == j)
   {
   sum+=a[i][j];
   }
   }
  }
   printf("The trace is %d",sum);
  return 0;
 }
