// WAP to read a value and print its corresponding percentage form 1% to 15%

#include<stdio.h>

int percentage(int);

int main(){
    int n ;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int per = percentage(n);
}

int percentage(int x){
    // for(int i=1; i<=15; i++){
    //     int a = (i/100)*x ;
    // }
    int a = 1, b ;
    if(a==16){
        return 1;
    }
    else{
        b = (a/100)*x ;
        
        printf("%d Percent : %d\n", a, b);
        percentage(a+1) ;
        return b ;
    }
}