#include <stdio.h>
void main(){
     int number;
    printf("Enter a number:");
    scanf("%d",&number);
    (number % 2 == 0) ? printf("\nthe number %d is even",number):printf("\nthe number %d is odd",number);
    return 0;
}