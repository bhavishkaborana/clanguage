#include <stdio.h>
 int main(){
     int i,size;
     printf("Enter array size:");
     scanf("%d",&size);
     
      int arr[size];
     printf("\n Enter array elements: \n");
       for (i = 0; i < size; i++){
          printf("a[%d]",i);
          scanf("%d",&arr[i]);
    }
       
    printf("\n The squares are:");
      for (i = 0; i < size; i++)
      {
        printf("%d",arr[i] * arr[i]);
        if (i != size -1){
            printf(", ");
        }
      }
      printf("\n");
    return 0;
 }