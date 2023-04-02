#include<stdio.h>      
int main(){
    int years ;

    printf("Enter Years :- ") ;      // Using if and else if Loops
    scanf("%d",&years) ;
    
    if (years < 3){
        printf("You are not Eligible for Bonus");
    } 
    else if (years >=3 && years <5 ){
        printf("Your Bouns is 20%%") ;
    }
    else if (years >=5 && years <10 ){
        printf("Your Bonus is 30%%") ;
    }
    else if (years>10){
        printf("Your Bonus is 40%%") ; // USE %% percentage symbol two times for getting % symbol printed
    }
}