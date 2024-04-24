#include <stdio.h>

int main() {
    int size,i,j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &size);
    
    int arr[size][size];
    printf("\nEnter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0;
    for (i = 0; i < size; i++) {
        sum += arr[i][i];
    }
    printf("\nThe sum of diagonal elements of an Array: %d\n", sum);
    
    return 0;
}
