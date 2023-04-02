#include<stdio.h>
#include<math.h>

int main(){
    int power, power1 ;
    int a = 3 ;
    int b = 5 ;
    
    power = pow(b,2) ;
    printf("%d --> %d", b,power);
    
    power1 = pow(a,2);
    printf("\n%d --> %d", a,power1);

    printf("\nSquare of 5 --> %d",pow(5,2));
    printf("\nSquare of 5 --> %d",(int)pow(5,2));
    
    return 0 ;
}