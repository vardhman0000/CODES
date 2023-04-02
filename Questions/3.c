// WAP that takes a positive integer and checks if it is a prime number or not
#include<stdio.h>
int main(){
    int n ;
    printf("Enter Number : ");
    scanf("%d", &n) ;
    int flag = 0 ;
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            flag = 1 ;
        }
    }
    if(flag == 0){
        printf("Prime Number !!");
    }
    else{
        printf("Non-Prime Number !!");
    }
}