#include <stdio.h>
int main (){
    int rows=5,i=1,j=1;
    
    for(i=1;i<=rows;i++){
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}