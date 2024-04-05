#include <stdio.h>
int main(){
   int rows = 5,j,i; 
    for (i = rows; i >= 1; i--) {
        for ( j = 1; j <= i; j++) {
            if (j % 2 == 0)
                printf("0 ");
            else
                printf("1 ");
        }
        printf("\n"); 
    }

    return 0;
}