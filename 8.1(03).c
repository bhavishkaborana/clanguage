#include <stdio.h>
int main(){
    int size,i;
     printf("Enter array size:");
     scanf("%d",&size);
    int arrA[size],arrB[size],arrC[size];
     printf("\n Enter array A's elements:"); 
     for (i=0;i< size;i++)
     {
        printf("a[%d]",i);
        scanf("%d",&arrA[i]);
     }
     printf("\n Enter array B's elements:"); 
     for (i=0;i< size;i++)
     {
        printf("a[%d]",i);
        scanf("%d",&arrB[i]);
     }
     for (i = 0; i < size; i++){
         arrC[i] = arrA[i]+arrB[i];
     }
     printf("\n Array C is:");
       for (i = 0; i < size; i++){
          printf("%d",arrC[i]);
          if (i != size - 1)
            printf(", ");
       }
         printf("\n");
    return 0;
}