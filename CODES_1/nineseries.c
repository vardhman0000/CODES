#include<stdio.h>
#include<math.h>
int main(){
    int num, i, j, sum=0, a,b;
    printf("Enter Number of Terms : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){      // For Printing Series
        for(j=1; j<=i; j++){
            printf("9");
        }
        printf(" ");
    }

    // for(a=1; a<=num; a++){
    //     b = (pow(10,a))-1 ;
    //     printf("\n%d",(int)b);
    //     sum = sum + b ;
    // }
    
    a=10 ;                       // For Getting Sum
    for(i=1; i<=num; i++){
        sum = sum + a-1;
        a=a*10;
    }

    printf("\n%d",sum);
}