//WAP to find roots of a quadratic equation using switch case
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

    switch(d>0){
        case 1 : 
        printf("\nTwo Real and Distinct Roots Exists !!");
        x1 = ( (-b) + (sqrt(d)) ) / (2*a) ;
        x2 = ( (-b) - (sqrt(d)) ) / (2*a) ;
        printf("\nRoots of %c are %d , %d ", x,x1,x2 );
        break;

        case 0 :
        switch(d==0){
            case 1 :
            printf("\nReal and Same Roots Exists !!");
            x1 = ( (-b) + (sqrt(d)) ) / (2*a) ;
            x2 = ( (-b) - (sqrt(d)) ) / (2*a) ;
            printf("\nRoots of %c are %d , %d ", x,x1,x2 );

            default :
            printf("\nTwo Complex and Distinct Roots Exists !!");
        }
    }
}