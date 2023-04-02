// WAP to create simple calculator using switch case
#include<stdio.h>
int main(){
    char symbol,a ;
    int a1=0,a2=0 ;
    
    printf("1. For Addition - +\n2. For Subtraction - -\n3. For Product - *\n4. For Division - /");
    printf("\nEnter Symbol : ");
    scanf("%c",&symbol);
    
    printf("Enter First Number : ");
    scanf("%d",&a1);
    
    printf("Enter Second Number : ");
    scanf("%d",&a2);


    switch(symbol){
        case '+' : printf("Sum is %d",a1+a2);
            break;
        case '-' : printf("Difference is %d",a1-a2);
            break;
        case '*' : printf("Product is %d",a1*a2);
            break;
        case '/' : printf("Quotient is %d",a1/a2);
            break;
    }
}