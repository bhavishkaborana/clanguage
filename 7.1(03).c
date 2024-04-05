#include <stdio.h>
int main(){
    int rows=5,i,j ;
     for(i=rows;i>=1;i--){
        for(j=rows;j>=i;j--){
            printf("%d",i);
        }
        printf("\n");
     }

    return 0;
}