#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int num, n, x, rev=0, rem ;
    printf("Enter Number : ");
    scanf("%d", &num);
    n=num ;
    while(n>0){
        n=n/10 ;
        x++ ;
        rem = num%10 ;
        num = n ;
        rev = rev * 10 + rem ; 
    }
    printf("\nNo. of Digits : %d", x);
    printf("\nReverse of Number : %d", rev);
}