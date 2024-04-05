#include <stdio.h>

int main() {
    int i; 
    printf("Enter your choice:");
    scanf("%d",&i);
    
    do {
        printf("%d",i); 
        i--; 
    } while (i >= 1);

    return 0;
}