#include <stdio.h>

int cube(int num) {
    return num * num * num;
}
int main() {
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    printf("Cube is: %d\n", cube(number));

    return 0;
}
