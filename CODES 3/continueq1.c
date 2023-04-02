#include<stdio.h>
int main(){
    int a = 10 ;
    while(a<=25){
        a+=2;
        if(a>15 && a<20){
            continue ;
        }
        printf("%d\n", a);
    
    }
}