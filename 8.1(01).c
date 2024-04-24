#include <stdio.h>
int main(){
    int size,i;
     printf("Enter array size:");
     scanf("%d",&size);
    int arr[size];
     printf("\n Enter array elements:"); 
     for (i=0;i< size;i++)
     {
        printf("a[%d]",i);
        scanf("%d",&arr[i]);
     }
     printf("\n Length of an Array: %d", size);
    return 0;
}