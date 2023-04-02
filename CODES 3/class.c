#include<stdio.h>
int main(){
    int a, count=0;
    for(a=1; a<=50; a++){
        if(a%5==0){
            continue;
        }
        printf("%d  ", a);
        count++ ;
        if (count==10){
            printf("\n");
            count=0 ;
        }
    }
}