#include <stdio.h>
int main(){
     int N;
       printf("Enter the value N:");
       scanf("%d",&N);

       printf("Odd number %d",N);
       while (N>=1)
       {
        if (N % 2 !=0){
            printf(" \n %d",N);
        } 
        N--;
       }
       
    return 0;
}