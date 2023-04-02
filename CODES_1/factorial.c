// WAP to calculte the factorial of a given number
#include<stdio.h>
int main(){
    int num,i, fact=1;
    printf("Enter a Number : ");
    scanf("%d",&num);

    for(i=num; i>0; i-- ){
        fact = fact*i;
    }
    printf("Factorial is : %d",fact);
}