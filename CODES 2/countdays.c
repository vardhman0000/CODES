// WAP that asks for two inputs year and month number(1-12). Based on year and month number calculate
// the total number of days from the month Jan

#include<stdio.h>
int main(){
    int year, month, leap=2, feb1, feb2, days, sum=0 ;
    printf("Enter Year : ");
    scanf("%d", &year);
    printf("Enter Month Number (1-12) : ");
    scanf("%d", &month);

    if(year%100==0){ //checks for century year
        if(year%400==0){
            leap=1;
        }
        else{
            leap=0;
        }
    }
    else{
        if(year%4==0){
            leap=1;
        }
        else{
            leap=0;
        }
    }
    
    for(int i = month; i>0; i-- ){
        //printf("\nI - %d", i);
        if(i==2){
            if(leap==0){
                //printf("\n1");
                sum = sum + 28 ;
                }
            else if(leap==1){
                //printf("\n2");
                sum = sum + 29 ;
            }
        }
        else if(i>=1 && i<=7 && i != 2){
            if(i % 2 == 0){
                //printf("\n3");
                sum = sum + 30 ;
            }
            else if(i % 2 != 0){
                printf("\n4");
                sum = sum + 31 ;
            }
        }
        else if(i>=8 && i<=12 && i != 2){
                if(i % 2 == 0){
                    printf("\n5");
                    sum = sum + 31 ;
                }
                else if(i % 2 != 0){
                    printf("\n6");
                    sum = sum + 30 ;
                }
        }
    }
    printf("\nDAYS - %d", sum);
















    //printf("LEAP %d", leap);
    // while(month>0){
    //     printf("\n\nMONTH - %d", month);
        
    //     if(month==2 && leap==1){
    //         sum=sum+29 ;
    //     }
    //     else if(month==2 && leap==0){
    //         sum=sum+28 ;
    //     }
    //     if(month>=1 && month <=7){
    //         if(month==2){
    //             continue ;
    //         }
    //         else if(month%2==0){
    //             printf("\n1");
    //             days = 30 ;
    //         }
    //         else if(month%2!=0){
    //             printf("\n2");
    //             days = 31 ;
    //         }
    //     }
        
    //     else if(month>=8 && month<=12){
    //         if(month%2==0){
    //             printf("\n3");
    //             days = 31 ;
    //         }
    //         else if(month%2!=0){
    //             printf("\n4");
    //             days = 30 ;
    //         }
    //     }
    //     month-- ;
    //     printf("\nDAYS - %d", days);
    //     sum = sum + days ;
    // }
    // printf("\nSUM - %d", sum);

}