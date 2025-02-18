#include <stdio.h>
int main(){
int i,j,r,c,r1,c1;
//input valuea of first matrix
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
 //input values of second matrix
printf("Enter the number of rows and columns:");
 scanf("%d%d",&r1,&c1);
 int b[r1][c1];
 printf("Enter the values of first matrix:");
 for (i=0;i<r1;i++)
 {
  for (j=0;j<c1;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }
 printf("Matrice is:\n");
 for (i=0;i<r1;i++)
 {
  for (j=0;j<c1;j++)
  {
   printf("%d\t",b[i][j]);
  }
  printf("\n");
 }
 if(c != c1)
 {
  printf("Matrix multiplication is not possible");
 }
 else
 {
  //perform multiplication
  int mul[10][10];
  for (i=0;i<r;i++)
 {
  for (j=0;j<c1;j++)
  {
   mul[i][j] = 0;
   for(int k=0;k<c;k++)
   {
   mul[i][j] += a[i][k] * b[k][j];
   }
  }
 }
 printf("The product of matrices is:\n");
 for (i=0;i<r;i++)
 {
  for (j=0;j<c1;j++)
  {
   printf("%d",mul[i][j]);
  }
 }
 }
 return 0;
}
