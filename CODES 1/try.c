#include<stdio.h>
int main() {

    float a;            // Declared FLOAT
    a = 10 ;            // Defined INTEGER
    printf("%f",a) ;    // Output format FLOAT   >>>>>>>>>>>>>> if Output format INTEGER >>> got 0

    int b ;                // Declared INTEGER
    b = 12.20 ;            // Defined FLOAT
    printf("\n%d",b) ;     // Output INTEGER  >>>>>>>>>>>>>  if Output Format FLOAT >>> got 10.00000

    printf("\n%s","HELLO!!") ;    // STRING

    printf("\n%c","") ;        // CHAR

    return 0 ;
}