#include<stdio.h>
int main (){
    int age ;
    printf("Enter your Age :- ");
    scanf("%d",&age);
    
    if (age>=18){
        printf("You are eligible to cast vote!!");
    } 
    else{
        printf("You are not eligible to cast vote!!");
    }
}