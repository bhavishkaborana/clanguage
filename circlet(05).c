#include <stdio.h>
  int main(){
    int i,j,k,n=5;
         for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        for (k = 1; k <= 2 * (n - i); k++) {
            printf("  ");
        }
        for (j = i; j >= 1; j--) {
            if (j != n) 
                printf("%d ",  j);
        }
        printf("\n ");
    }

    return 0;
  }