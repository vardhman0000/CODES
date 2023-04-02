#include<stdio.h>
int main(){
    char ab ;
    printf("Enter Character : ");
    scanf("%c",&ab);

    if(ab>=65 && ab<=90){
        printf("UpperCase!!");
    }
    else if(ab>=97 && ab<=122){
        printf("LowerCase!!");
    }
}