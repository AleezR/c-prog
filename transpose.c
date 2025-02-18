#include <stdio.h>
int main(){
int i,j,r,c;
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
// finding transpose
 printf("Transpose matrix:\n");
 for(i=0;i<r;i++)
 {
  for (j=0;j<c;j++)
  {
   printf("%d\t",a[j][i]);
  }
  printf("\n");
 }
 return 0;
}
