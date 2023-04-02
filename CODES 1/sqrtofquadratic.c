// WAP to find the Square root of a Quadratic Equation

#include<stdio.h>
#include<math.h>
int main(){
    char x,x1,x2;
    int a,b,c,d,p;

    printf("Enter Variable of Quadratic Equation : ");
    scanf("%c",&x) ;

    printf("Enter Coefficients of %c^2 + %c + c = 0 (max 3 values): ", x,x );
    scanf("%d%d%d",&a,&b,&c);

    printf("Your Equation is : %d%c^2 + %d%c + %d = 0", a,x,b,x,c );

    d = (b*b)-(4*a*c);                          // Discriminant

    if(d>0){
        printf("\nTwo Real and Distinct Roots Exists !!");
        x1 = ( (-b) + (sqrt(d)) ) / (2*a) ;
        x2 = ( (-b) - (sqrt(d)) ) / (2*a) ;
        printf("\nRoots of %c are %d , %d ", x,x1,x2 );
    }
    
    else if(d == 0){
        printf("Real and Same Roots Exists !!");
        x1 = ( (-b) + (sqrt(d)) ) / (2*a) ;
        x2 = ( (-b) - (sqrt(d)) ) / (2*a) ;
        printf("\nRoots of %c are %d , %d ", x,x1,x2 );
    }

    else if(d < 0){
        printf("\nTwo Complex and Distinct Roots Exists !!");
        // x1 = ( (-b) + (sqrt(d)) ) / (2*a) ;
        // x2 = ( (-b) - (sqrt(d)) ) / (2*a) ;
        // printf("\nRoots of %c are %d , %d ", x,x1,x2 );
    }    
}