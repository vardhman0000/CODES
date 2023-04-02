#include<stdio.h>

int sum(int) ;

int main(){
    int n ;
    printf("Enter Number : ");
    scanf("%d", &n);
    int ans = sum(n) ;
    printf("Sum of digits of %d are %d", n, ans);
}

int sum(int num){
    if(num==0){
        return ;
    }
    else{
        return (num%10) + sum(num/10) ;
    }
}