#include <stdio.h>
void swap(int *a, int *b) {
    int temp; 
    temp = *a;
    *a = *b;  
    *b = temp;
}
int main() {
    int x, y;

    printf("Enter two integers to swap:\n");
    printf("Enter first integer (x): ");
    scanf("%d", &x);
    printf("Enter second integer (y): ");
    scanf("%d", &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
