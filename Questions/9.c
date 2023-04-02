// Write a program that takes a string and removes all the whitespace characters from it

#include<stdio.h>
#include<string.h>
int main(){
    char str[100] ;
    printf("Enter String : ");
    gets(str);
    //puts(str) ;
    int len = strlen(str) ;
    printf("String without whitespaces : ");
    for(int i=0; i<len; i++){
        if(str[i]==' '){
            continue ;
        }
        else{
            printf("%c", str[i]);
        }
    }
}