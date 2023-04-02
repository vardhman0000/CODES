// WAP to check if given number is +ve or -ve

#include<stdio.h>
int main(){
    int a ;
    printf("Enter a Number : ") ;
    scanf("%d",&a) ;

    if (a>0){
        printf("Postive Number !!!") ;
    }
    else if (a<0){
        printf("Negative Number !!!") ;
    }
    else{
        printf("You entered Zero") ;
    }
}