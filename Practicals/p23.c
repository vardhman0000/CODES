// Write a program to find the factorial of a number by using the concept of recursion.
#include<stdio.h>

int factorial(int) ;

int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
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