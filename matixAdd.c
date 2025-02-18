#include <stdio.h>
int main()
{
 int i,j,r1,c1,r2,c2;
 int sum[r1][c1];
 //input the number of rows and columns of first matrix and its values
 printf("Enter the number of rows and columns:");
 scanf("%d%d",&r1,&c1);
 int a[r1][c1];
 printf("Enter the values of first matrix:");
 for (i=0;i<r1;i++)
 {
  for (j=0;j<c1;j++)
  {
   scanf("%d",&a[i][j]);
  }
 }
 //input the number of rows and columns of second matrix and its values
 printf("Enter the number of rows and columns:");
 scanf("%d%d",&r2,&c2);
 int b[r2][c2];
 printf("Enter the values of second matrix:");
 for (i=0;i<r2;i++)
 {
  for (j=0;j<c2;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 //ADDITION
 if (r1 == r2 && c1 == c2)
 {
 for (i=0;i<r1;i++)
  {
   for (j=0;j<c1;j++)
   {
    sum[i][j] = a[i][j] + b[i][j];
   }
  }
  printf("Sum of matrices is:\n");
  for (i=0;i<r1;i++)
 {
  for (j=0;j<c1;j++)
  {
   printf("%d\t",sum[i][j]);
  }
   printf("\n");
  }
 }
 else
 {
  printf("Addition is not possible");
 }
 return 0;
}
  
