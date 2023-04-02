/*

global scope variables
function prototype
main function  ---> function call inside main function
function definition

*/

#include<stdio.h>
int a, b, c ;   // global scope variables

int product(int a, int b);   // Function Prototype

int main(){                 // Main Function
    int x,y ;
    printf("Enter First Number : ");
    scanf("%d", &x);

    printf("Enter Second Number : ");
    scanf("%d", &y);

    c = product(x ,y) ;

    printf("OUTPUT - %d", c);

    return 0;
}

int product(int a, int b){
    return a*b ;
}