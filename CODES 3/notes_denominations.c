/*
500, 200, 100, 50, 20, 10, 5, 2, 1
*/


#include<stdio.h>
int main(){
    int amt, n500=0, n200=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0 ;
    printf("Enter Amount : ") ;
    scanf("%d", &amt);
    printf("%d", amt);
    
    while(amt>=500){
        amt = amt-500 ;
        n500++ ;
    }
    while(amt>=200){
        amt = amt-200 ;
        n200++ ;
    }
    while(amt>=100){
        amt = amt-100 ;
        n100++ ;
    }
    while(amt>=50){
        amt = amt-50 ;
        n50++ ;
    }
    while(amt>=20){
        amt = amt-20 ;
        n20 ++ ;
    }
    while(amt>=10){
        amt = amt-10 ;
        n10++ ;
    }
    while(amt>=5){
        amt = amt-5 ;
        n5++ ;
    }
    while(amt>=2){
        amt = amt-2 ;
        n2++ ;
    }
    while(amt>=1){
        amt = amt-1 ;
        n1++ ;
    }

printf("Respective Denomination are : \n");
printf("500 - %d\n200 - %d\n100 - %d\n 50 - %d\n 20 - %d\n 10 - %d\n  5 - %d\n  2 - %d\n  1 - %d", n500, n200, n100, n50, n20, n10, n5, n2, n1);
}