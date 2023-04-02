#include<stdio.h>
#include<math.h>
int main(){
    int num, orig, x, q, num1 = 0, num2 = 0, rem = 0, count = 0, a, power;
    printf("Enter a Number to Reverse : ");
    scanf("%d",&num); // Number stored in num   //if done  >>  scanf("%d",&num,&orig) then orig will have some garbage value but not the value that is assigned to num
    orig = num ;

    printf("ORIG : %d\n",orig);
    while(orig>0){             // For getting number of digits
        orig = orig/10 ;
        count++ ;
    }
    printf("NUM : %d\n",num);
    printf("count = %d",count);
    
    for(a=count; a>0; a--){
        rem = num % 10 ;
        printf("\nREM : %d",rem);

    //     // power = pow(10,(a-1)) ;   // Using power function
    //     // num1 = rem * (int)power ;
        
        q = 10 ;
        for(x = count-2; x>0; x--){
            q = q*10 ;
            printf("\nP : %d",q);
        }

        num1 = rem * q ;
        printf("\nNUM1 : %d",num1);

        num = num/10 ;
        printf("\nNUM : %d",num);

        num2 = num2 + num1 ;
        
    }

    printf("\nReverse is : %d",num2);
}