#include<stdio.h>
int main(){
    
    int a,b,c,d ;
    a = 2 % 5 ;        // The Sign of the answer always depends on Sign of Numerator
    b = -2 % 5 ;
    c = 2 % -5 ;
    d = -2 % -5 ;
    
    printf(" a = %d\n b = %d\n c = %d\n d = %d\n", a,b,c,d ) ;     // If Numerator and Denominator both are -ve still due to -ve sign of numerator the ans will be -ve
    return 0;
}