#include<stdio.h>
int main(){
    int limit, i=1, a=1 ;
    printf("Enter Limit : ");
    scanf("%d", &limit);

    while(i<=limit){
        if(a%2 !=0){
            printf("NUM - %d", a);
            a++ ;
        }
    }
    i++ ;
}
