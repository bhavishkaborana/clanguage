#include <stdio.h>
 
int main(){
   int N,i;
   printf("Enter the value of N:");
   scanf("%d",&N);
   printf("\n %d",N);
   for(i=1; i<=10; ++i){
     printf("\n %d x %d = %d", N, i, N * i);
   }
   
    return 0;
}