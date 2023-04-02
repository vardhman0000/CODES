//WAP to print Fibonacci Series upto a user inputted limit using functions

#include<stdio.h>

int n, a = 0, b = 1, c = 0 ;   // Global Declaration of Variables

int fibonacci();      // Prototype of Function

int main(){                       // Main function
    int a = 0, b = 1, c = 0 ;
    printf("Enter Limit : ");
    scanf("%d", &n);
    printf("SERIES : 0 ");
    for(int i=n-1; i>0; i--){
        c = fibonacci() ;
        printf("%d ", c);
    }
}

int fibonacci(){                // Declared function
    a = b ;
    b = c ;
    c = a+b ;
    return c ;
}