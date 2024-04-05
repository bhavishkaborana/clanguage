#include <stdio.h>

void main(){
     int ch1,ch2;
     printf("Press 1 for English \nPress 2 for Hindi \nPress 3 for Gujarati");
     scanf("\n Enter your choice:");
     scanf("%d",&ch1);
     switch(ch1)
     {
    
     case 1:printf("Press 1 for Internet Recharge \nPress 2 for Top-up Recharge \nPress 3 for Special Recharge");
            printf("\n Enter the choice ");
            scanf("%d",&ch2);
              switch(ch2)
              {
              case 1:printf("\n You have successfully done a internet Recharge.");
                
                break;
                case 2:printf("\n You have successfully done a top-up Recharge.");
                break;

                case 3:printf("\n You have successfully done a special Recharge.");
                break;

              default:printf("\n invalid choice");
                break;
              }
     case 2: printf("Internet Recharge ke liye 1 dabaiye \nTop-up Recharge ke liye 2 dabaiye \nSpecial Recharge ke liye 3 dabaiye");
             printf("\n Enter the choice:");
             scanf("%d",&ch2);
              switch (ch2)
              {
              case 1:printf("\n Aapne safaltapurvak Internet Recharge kar liya he.");
                
                break;
                case 2:printf("\n Aapne safaltapurvak top-up Recharge kar liya he.");
                break;

                case 3:printf("\n Aapne safaltapurvak special Recharge kar liya he.");
                break;

              default:printf("\n invalid choice");
                break;
              }
              break;
     case 3: printf("Internet Recharge mate 1 dabavo \nTop-up Recharge mate 2 dabavo \nSpecial Recharge mate 3 dabavo");
             printf("\n Enter the choice:");
             scanf("%d",&ch2);
              switch (ch2)
              {
              case 1:printf("\n Tame safaltapurvak internet Recharge karyu chhe.");
                
                break;
                case 2:printf("\n Tame safaltapurvak top-up Recharge karyu chhe.");
                break;

                case 3:printf("\n Tame safaltapurvak Special Recharge karyu chhe.");
                break;

              default:printf("\n invalid choice");
                break;
              }
              break;
            default:printf("invalid choice");
                break;

     }
    return 0;
}