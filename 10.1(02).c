#include <stdio.h>

int isDivisibleBy3And5(int num) {
    return (num % 3 == 0 && num % 5 == 0);
}
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    if (isDivisibleBy3And5(number)) {
        printf("\n The given number is divisible by both 3 & 5.");
    } else {
        printf("\n The given number is not divisible by both 3 & 5.");
    }
    return 0;
}
