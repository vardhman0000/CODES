#include<stdio.h>

int factorial(int) ;

int main(){
    int n, fact ;
    printf("Enter Number : ");
    scanf("%d", &n);
    fact = factorial(n) ;
    printf("Factorial is : %d", fact);
}

int factorial(int x){
    int f ;
    if(x==1){
        return 1 ;
    }
    else{
        f = x*factorial(x-1) ;
        return f ;
    }
}