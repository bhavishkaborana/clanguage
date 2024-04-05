#include <stdio.h>

int main() {
    int i = 1; 
    printf("Enter your choice:");
    scanf("%d",&i);
    
    do {
        printf("%d ", i); 
        i++; 
    } while (i <= 10);

    return 0;
}