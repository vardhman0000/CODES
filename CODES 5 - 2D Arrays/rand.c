#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int a ;
    srand(time(NULL)) ;
    for(int i=1; i<11; i++){
        a = rand() ;
        printf("%d ", a);
        printf("\n");
    }
}
