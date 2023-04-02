#include<stdio.h>

int sum(int) ;

int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int n ;
    printf("Enter Number : ");
    scanf("%d", &n);
    int ans = sum(n) ;
    printf("Sum of digits of %d are %d", n, ans);
}

int sum(int num){
    if(num==0){
        return 0;
    }
    else{
        return (num%10) + sum(num/10) ;
    }
}