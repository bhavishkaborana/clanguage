#include <stdio.h>
  int main(){
     int i,j,n=5 ;
        for (i = 1; i <= n; i++){
            for (j = 1; j < n; j++){
                if (i == 1 || i == 3 || j == 1 || j == n || (i == 5,4,2 && j == n - 1))
                printf("* ");
                else
                printf("  ");
            }
            printf("\n");
        }
        

    return 0;
  }