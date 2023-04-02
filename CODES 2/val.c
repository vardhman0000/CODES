#include<stdio.h>
// int main(){
//     char val = 127 ;
//     int ans ;
//     ans = val + !val + ~val + ++val ;
//     printf("%d", ans);
// }

int main(){
    char a ; 
    int b, c, d ;
    a = 250 ;
    b = ++a ; //
    c = ~a ;
    d = !a ;
    printf("%d", a+d+c+b);
}