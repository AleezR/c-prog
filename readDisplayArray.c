#include<stdio.h>
void printArray(int arr[],int size);
int main(){
int size;
int arr[100];
printf("Enter the no. of elements:");
scanf("%d",& size);
printf("Enter the elements:");
for (int i=0;i<size;i++)
{
scanf("%d",&arr[i]);
}
printf("Array elements");
printArray(arr,size);
return 0;
}
void printArray(int arr[],int size){
for(int i =0;i<size;i++){
printf("%d",arr[i]);
}
printf("\n");
}
