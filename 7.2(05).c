#include <stdio.h>

int main() {
    int n = 5,i,j,k;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < i; j++) {
            printf("  "); 
        }
        for (k = n - i; k >= 1; k--) {
            if (k == 1) {
                printf("%d", k);
            } else {
                printf("%d ", k);
            }
        }
        printf("\n");
    }
    
    return 0;
}
