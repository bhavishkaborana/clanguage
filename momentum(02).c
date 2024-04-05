#include <stdio.h>

void main(){
    int unit;
    printf("Enter Electricity units:");
    scanf("%d",&unit);
    
    if (unit<=50)
    {
       unit = unit*0.50;
    }else if (unit>=51 && unit<=150){
       unit= 25+(unit-50)*0.75;
    } else if (unit>=151 && unit<=250){
       unit = 25+75+(unit-50)*1.20;
    }else  {
        unit = 25+75+120+(unit-250)*1.20;
    }
    printf("Electricity Bill %d",unit);
       return 0;
} 