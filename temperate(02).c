#include <stdio.h>
int main(){
   int A,B=0;
     printf("Enter the value of A:");
     scanf("%d",&A);
      while (A!=0)
      {
        A=A/10;
        B++;
      }
      
     printf("\n Total digits: %d",B);

    
    return 0;
}