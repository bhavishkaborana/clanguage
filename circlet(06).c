#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("   ");
        }
        for (int k = rows - i + 1; k <= rows; k++) {
            printf("%d ", k);
            if (k < rows){
                printf(" ");
            }
        }
        for (int l = rows - 1; l >=rows - i + 1;l--) {
            printf("%d  ", l);
        }
        printf("\n");
    }
    
    return 0;
}
