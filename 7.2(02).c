#include <stdio.h>

int main() {
    int i,k = 5,j;
    
    for (i = 1; i <= k; i++) {
        for (j = 1; j <= k; j++) {
       
       if (j  <= k - i)
       {
          printf("   "); 
       }else{
         printf("%d  ",j);
       }
       }
        printf("\n");
         
    }
    
    return 0;
}
