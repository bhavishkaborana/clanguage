#include <stdio.h>
 int main(){
     int i,size;
     printf("Enter the array's size:");
     scanf("%d",&size);
    
     int arr[size];
     for (i = 0; i < size; i++)
     { printf("\n Enter array elements:");
       printf("arr[%d]",i);
       scanf("%d",&arr[i]);
     }
     printf("\n Reversed array elements:");
     
    

    return 0;
 }