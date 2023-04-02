// WAP that accepts two numbers and check whether they are equal or not

#include<stdio.h>
int main(){
    int a,b ;
    printf("Enter First Number : ") ;
    scanf("%d",&a) ;

    printf("Enter Second Number : ") ;
    scanf("%d",&b) ;

    if (a==b){
        printf("Numbers are Equal!!!") ; 
    } else{
        printf("Numbers are not Equal!!!") ;
    }
}