// WAP to input three numbers and print the largest one

#include<stdio.h>
int main(){
    int a,b,c ;

    printf("Enter First Number : ") ;
    scanf("%d",&a) ;
    printf("Enter Second Number : ") ;
    scanf("%d",&b) ;
    printf("Enter Third Number : ") ;
    scanf("%d",&c) ;

    if(a>b && a>c){
        printf("%d is the Largest Number !!",a);
    }
    else if(b>a && b>c){
        printf("%d is the largest Number !!",b);
    }
    else{
        printf("%d is the largest Number !!",c);
    }

}