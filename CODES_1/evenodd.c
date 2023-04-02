// WAP to check if a number is even or odd

#include<stdio.h>

int main(){
    // even --> 1
    // odd  --> 0
    int x ;
    printf("Enter a Number : ");
    scanf("%d") ;
    printf("%d", x % 2 == 0);
    return 0;
}