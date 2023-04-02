#include<stdio.h>
int main(){
    int a = 0;
    do{
        a++;
        if(a>=15 && a<=19){
            continue;
        }
        printf("%d   ", a);
    }while(a<30);
}