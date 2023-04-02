// WAP to print all Alphabets using a pointer
#include<stdio.h>
int main(){
    char a  = 65 ;
    char *i ;
    i = &a ;
    for (int j = 1; j<=26; j++){
        printf(" %s", *i) ;
        i=i+1;
    }

}