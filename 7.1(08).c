#include <stdio.h>
int main(){
   int i,j,rows=5,count=1;
    for(i=1;  i<=rows;  i++){
        for (j=1; j<=i; j++){
            printf("\t%d",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}
