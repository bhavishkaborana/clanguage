#include <stdio.h>

int main() {
    int N, sum=1,i;
    unsigned long long factorial = 1;
    printf("Enter your choice:");
    scanf("%d", &N);
    for ( i = N; i >= 1; i--)
    {
         sum *= i;
    }
    printf("\n the factor is : %d",sum);

    return 0;
}