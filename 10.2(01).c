#include <stdio.h>
   int Add(int *arr, int size);
 int main(){
      int i,size,sum=0 ,ans;
        printf("Enter array size: ");
        scanf("%d",&size);
        int arr[size];
         printf("\n Enter array elements");
        for (i = 0; i < size; i++){ 
          printf("\n a[%d]=",i);      
          scanf("%d",&arr[i]);
        }
        ans = Add(arr,size);
        printf("the sum of an Array's:%d",ans);
  
   return 0;
 }
  int Add(int *arr, int size){
      int sum=0;
      for (int i = 0; i < size; i++)
      {
        sum += arr[i];
      }
      return sum;
  }
 