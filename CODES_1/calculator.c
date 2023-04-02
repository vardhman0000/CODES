
// WAP to make calculator by user input for addition, subtraction, multiplpication adn division.

#include<stdio.h>
int main(){
    int choice,a,b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter your Choice : ") ;
    scanf("%d",&choice) ;

    printf("Enter two Numbers : ") ;
    scanf("%d%d" ,&a,&b) ;             // Using Multiple Inputs


    if (choice == 1){
        printf("SUM is : %d",a+b) ;
    }
    else if(choice == 2){
        printf("Difference is : %d",a-b) ;
    }
    else if(choice == 3){
        printf("Product is : %d",a*b) ;
    }
    else if(choice == 4){
        printf("Quotient is : %0.2f",a/b) ;
    }
}