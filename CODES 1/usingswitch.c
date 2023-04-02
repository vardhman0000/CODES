#include<stdio.h>
int main(){
    int day ;
    printf("Enter a Number (1-7) :- ") ;
    scanf("%d",&day) ;

    switch(day){       // Using SWITCH OPERATOR 1) Cases can be in any order 2) Nested SWITCH is allowed
        
        case 1 : printf("MONDAY") ;
        break ;
        case 2 : printf("TUESDAY") ;
        break ;
        case 3 : printf("WEDNESDAY") ;
        break ;
        case 4 : printf("THURSDAY") ;
        break ;
        case 5 : printf("FRIDAY") ;
        break ;
        case 6 : printf("SATURDAY") ;
        break ;
        default : printf("SUNDAY") ;
    }
}