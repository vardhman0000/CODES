/*   Write a program to compute sinx for given x. The user should supply x and a positive integer n. 
We compute the sine of x using the series and the computation should use all terms in the series up 
through the term involving xn
sin x = x - x3/3! + x5/5! - x7/7! + x9/9! .......         */

#include<stdio.h>
#include<math.h>
int main(){
    float n, x, sum=0, sum1=0, sum2=0, p1, p2, fact=1, odd=1;
    
    printf("Enter value of n : ");
    scanf("%f", &n);
    printf("Enter value of x : ");
    scanf("%f", &x);

    while(n>0){ // n = 4
        
        for(int i=1; i<=n; i++){ 

            while(n>0){    //n=2,x=3
                odd +=2 ;
                printf("\nODD - %f", odd);
                    
                fact = fact*n ;
                printf("\nFACTORIAL = %f", fact);
            
                if((int)n % 2 == 0){
                    p1 = pow(x,odd) ;
                    sum1 = (sum1 - p1)/fact ;
                }
                else if((int)n % 2 != 0){
                    p2 = pow(x,i) ;
                    sum2 = (sum2 + p2)/fact ;
                }
                n-- ;
            }
        }
        n-- ;
    }
    sum = sum1+sum2 ;
    printf("\nsin%d = %f", (int)x,sum);
}