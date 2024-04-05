#include <stdio.h>

int main() {
    int N, first = 0, second = 1, next, i;
    
    
    printf("Enter the number of series: ");
    scanf("%d", &N);
    printf( " \nFibonacci series up to %d terms:", N);
    for (i = 0; i < N; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    
    return 0;
}