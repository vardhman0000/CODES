// WAP to check if a number is divisible by 2 or not without using if else

#include<stdio.h>

int main(){
    int a,b,c,d,e ;
    
    printf("Enter a First Number : ");
    scanf("%d",&a);
    printf("%d", a % 2 == 0);

    printf("\nEnter a Second Number : ");
    scanf("%d",&b);
    printf("%d", b % 2 == 0);

    printf("\nEnter a Third Number : ");
    scanf("%d",&c);
    printf("%d", c % 2 == 0);

    printf("\nEnter a Fourth Number : ");
    scanf("%d",&d);
    printf("%d", d % 2 == 0);

    printf("\nEnter a Fifth Number : ");
    scanf("%d",&e);
    printf("%d", e % 2 == 0);
    
    return 0;

}