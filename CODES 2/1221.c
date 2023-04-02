// WAP to check a number is Armstrong or not using For Loop

#include<stdio.h>
#include<math.h>
int main(){
    int num, x=0, n, rem=0 ;
    float sum=0 ;
    printf("Enter Number : ");
    scanf("%d", &num);
    n=num;
    int new_num =num ;

    while(n>0){
        n=n/10;
        x+=1;  // x contains length
    }

    for(int i = x; i>0; i--){
        rem = num%10 ;
        //printf("\n\nREM - %d", rem);
        sum = sum + pow(rem,x) ;
        //printf("\nSUM - %d", sum);
        num = num/10 ;
        //printf("\nNUM - %d", num);
    }

    if((int)sum==new_num){
        printf("\nArmstrong Number !!");
    }
    else if((int)sum!=new_num){
        printf("\nNot an Armstrong Number !!");
     }
}
