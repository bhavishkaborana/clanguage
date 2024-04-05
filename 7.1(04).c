#include <stdio.h>
int main(){
     int i,j,rows=5;
     for(i=1;i<=rows;i++){
        for(j=i;j<=rows;j++){
            printf("%d",j);
        }
        printf("\n");
     }

    return 0;
}