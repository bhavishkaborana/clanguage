#include <stdio.h>
int main(){
   int rows=5,i=1,j=1;
    
    for(i=rows;i>=1;i--){
        for(j=i;j<=rows;j++){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}