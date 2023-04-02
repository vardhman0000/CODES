// Wap to perform Addition, Subtraction, Mutltiplication and Division of two nnumbers as given by user

#include<stdio.h>
int main(){
    float a,b ;
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    printf("Enter First Number : ");
    scanf("%f",&a);
    printf("Enter Second Number : ");
    scanf("%f",&b);

    printf("Sum : %0.2f \nDifference  : %0.2f \nProduct : %0.2f \nQuotient : %0.2f", a+b,a-b,a*b,a/b) ;
}