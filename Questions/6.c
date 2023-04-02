// WAP that takes a string and converts all the lowercase letters to uppercase letters
// CONCEPT - Difference between ASCII Values of UpperCase and LowerCase letters in 32
#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of String : ");
    scanf("%d", &n);
    
    char str[n] ;
    printf("Enter String : ");
    scanf("%s", &str);

    for(int i=0; i<n; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32 ;
        }
    }
    printf("Uppercase String : %s", str);
}