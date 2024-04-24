#include <stdio.h>

int main() {
    int n = 5,count; 
    int i, j, k;
    for (i = 1; i <= n; i++) {

        for (j = i; j < n; j++) {
            printf("  "); 
        }
        count = 6-i;
        for (k = 1; k <= i; k++) {
            printf("%d ", count++); 
        }
        printf("\n");
    }

    return 0;
}
