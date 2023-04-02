// WAP a program that reads a set A set of integers and then prints the sum of even and Odd integers
#include<stdio.h>
int main(){
    int num, odd = 0, even = 0 ;
    char choice ;
    do{
        printf("Enter Number : ");
        scanf("%d", &num);

        if(num%2==0){
            even=even+num ;
        }else{
            odd=odd+num ;
        }

        printf("Do you want to enter more (y/n): ");
        scanf(" %c", &choice); // you need to add a whitespace before %c
    }while(choice=='y');

    printf("\nSum of Odd Integers : %d", odd);
    printf("\nSum of Even Integers : %d", even);
}