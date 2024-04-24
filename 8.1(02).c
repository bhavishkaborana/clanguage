#include <stdio.h>
int main(){
    int size,i,sum=0;
    float average;
      printf("Enter array size:");
      scanf("%d",&size);
    int arr[size];
      printf("\n Enter array elements:");
      for (i=0;i<size;i++){
         printf("a[%d]",i);
         scanf("%d",&arr[i]);
         sum += arr[i];
      }
      average = (float)sum / size;
      printf("\n Average of an Array: %.2f",average);

    return 0;
}