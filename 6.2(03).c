#include <stdio.h>

int main(){
     int N,i ;
    printf("Enter the value of N:");     
    scanf("%d",&N);
    i=2;
    printf("\n Even numbers  %d",N);
    do{
        printf("%d",i);
        i+=2;
    }
    while(i <= N);
    return 0;
}