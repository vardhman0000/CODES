#include<stdio.h>
int main(){
    char ch ;
    printf("Enter a Chr to check its Case :- ") ;
    scanf("%c",&ch) ;

    if (ch >= 'a' && ch <='z'){
        printf("It's a LOWER CASE Character") ;
    } else if (ch >= 'A' && ch <='Z'){
        printf("It's an UPPER CASE Character") ;
    } else{
        printf("Not an English Character !!") ;
    }
}