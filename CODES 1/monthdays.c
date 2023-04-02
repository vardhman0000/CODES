// WAP to take month number and display the number of days of that month

#include<stdio.h>
int main(){
    int num ;
    printf("Enter Month Number : ") ;
    scanf("%d", &num );

    if(num==2){
        printf("28 Days !!");
    }

    else if(num>=1 && num<=7 && num != 2){
        if(num%2==0){
            printf("30 Days !!");
        }
        else{
            printf("31 Days !!");
        }
    }
    
    else if(num>=8 && num<=12){
        if(num%2==0){
            printf("31 Days !!");
        }
        else{
            printf("30 Days !!");
        }
    }
}