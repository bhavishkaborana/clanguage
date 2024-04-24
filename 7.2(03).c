#include <stdio.h>

int main() {
    int k=5,i,j;
    
    for ( i = k; i >= 1; i--) {
        for ( j = 1; j <= k; j++) {
       
            if (j >= i) {
                printf("%d  ", i);
            } else {
                printf("   ");
            }
         }
        
        printf("\n");
    }
    
    return 0;
}
