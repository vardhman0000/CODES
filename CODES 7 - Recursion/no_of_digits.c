#include<stdio.h>
int cd(int) ;
int main(){
    int n ;
    printf("Enter Number : ");
    scanf("%d", &n);
    int ans = cd(n);
    printf("No. of Digits in %d are %d", n, ans);
}

int cd(int num){
    if(num==0){
        return ;
    }
    else{
        return cd(num/10) + 1 ;
    }
}