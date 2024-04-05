#include <stdio.h>
int main(){
    int i,j; 
    char ch = 'A';
    for (i = ch; i <='E'; i++) {
        
        for (j = i; j >=ch; j--) {
            printf("%c ", j);
        }
        printf("\n"); 
    }

    return 0;
}