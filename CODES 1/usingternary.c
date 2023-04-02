#include<stdio.h>
int main(){             // Using Ternary Operator
    int age ;

    printf("Enter Your Age :- ") ;
    scanf("%d",&age) ;

    age >= 18 ? printf("Eligible to cast Vote!!\n") : printf("Not eligible to cast Vote!!\n") ;
}