#include <stdio.h>

int main() {
    int N, sum = 0;

    printf("Enter your choice : ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++) {
        sum += i;
    }
    printf("The sum of all numbers  %d is: %d\n", N, sum);
    
    return 0;
}