#include <stdio.h>
  
     int add(int a,int b);
     int subtract(int a,int b);
     int multiply(int a,int b);
     int divide(int a,int b);
     int modulus(int a,int b);    
int main(){
   int choice,num1,num2;
    
    while (1){
        printf("\n Press 1 for +:");
        printf("\n Press 2 for -:");
        printf("\n Press 3 for *:");
        printf("\n Press 4 for /:");
        printf("\n Press 5 for %%:");
        printf("\n Press 0 for the exit:");
        printf("\n Enter your choice:");
        scanf("%d",&choice);

    if (choice == 0){
        printf("Exiting program.\n");
        break;
    }
        printf("\n Enter the first number:");
        scanf("%d",&num1);
        printf("\n Enter the second number:");
        scanf("%d",&num2);
    
    switch (choice) {
    case 1:
         printf("Addition of %d and %d is %d\n", num1, num2, add(num1, num2));
        break;
    case 2:
         printf("subtract of %d and %d is %d\n", num1, num2, subtract(num1, num2));
        break;    
    case 3:
         printf("multiplication of %d and %d is %d\n", num1, num2, multiply(num1, num2));
        break;
    case 4:
         if (num2 == 0){
            printf("\n Error! Division by zero is not allowed.");
         }
         else{
            printf("Division of %d and %d is %d\n", num1, num2, divide(num1, num2));
         }
         break;
    case 5:
         printf("modulus of %d and %d is %d\n", num1, num2, modulus(num1, num2));
        break;

    default:
        printf("Invalid choice! Please choose again.");
    }
    }
    return 0;
  }
   int add(int a, int b) {
    return a + b;
}
   int subtract(int a, int b) {
    return a - b;
}
   int multiply(int a, int b) {
    return a * b;
}
   int divide(int a, int b) {
    return a / b;
}
int modulus(int a, int b) {
    return a % b;
}