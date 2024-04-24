#include <stdio.h>

int main() {
    int rows, cols,i,j;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int sum = 0, count = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
            count++;
        }
    }
    float average = (float)sum / count;
    printf("\nAverage of an Array: %.2f", average);
    
    return 0;
}
