#include<stdio.h>
int main(){
    int marks ;
    printf("Enter Marks :- ") ;
    scanf("%d",&marks) ;

    if (marks >= 60){
        printf("First Division \n") ;
    }
    else if (marks < 60 && marks >= 50){
        printf("Second Division \n") ;
    }
    else if (marks < 50 && marks >= 40){
        printf("Your Grade is A \n") ;
    }
    else {
        printf("FAIL !! \n") ; 
    }
}