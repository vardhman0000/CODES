// Write a program to show the use of passing pointer as arguments to the functions.

#include<stdio.h>

int product(int *, int *);

int main(){
    int a, b, *x, *y ;
    printf("Enter First Element : ");
    scanf("%d", &a);
    printf("Enter Second Element : ");
    scanf("%d", &b);
    x = &a ;
    y = &b ;
    int c = product(x, y) ;
    printf("\nProduct is %d", c);
}
int product(int *x, int *y){
    return ((*x) * (*y)) ;
}