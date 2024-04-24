#include <stdio.h>
 int main(){
     int firstnum,secondnum,i,year,leapYearCount=0; 
     printf("Enter the first number:");
     scanf("%d",&firstnum);
     
     printf("Enter the second number:");
     scanf("%d",&secondnum);
     int leapYears[1000]; 
    for (year = firstnum; year <= secondnum; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leapYears[leapYearCount] = year;
            leapYearCount++;
        }
    }
    printf("The array is: ");
    for (i = 0; i < leapYearCount; i++) {
        printf("%d", leapYears[i]);
        if (i != leapYearCount - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
 }