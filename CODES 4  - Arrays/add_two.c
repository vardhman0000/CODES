// WAP to add two numbers using pointers
#include<stdio.h>
int main(){
    int n1, n2 ;
    printf("Enter First Number : " ) ;
    scanf("%d", &n1);
    printf("Enter Second Number : " );
    scanf("%d", &n2);

    int *i, *j ;
    i= &n1 ;
    j= &n2 ;
    printf("The Sum of entered Nnumbers is:%d", *i + *j);
}