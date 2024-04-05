#include <stdio.h>

int main(){
    int no,last_digit,first_digit,sum ;
    printf("Enter the number:");
    scanf("%d",&no);
    last_digit = no % 10;
    while (no >= 10) {
        no /= 10;
    }
    first_digit = no;
    sum = first_digit + last_digit;
    printf("Sum of first and last digit: %d\n", sum);
    return 0;
}