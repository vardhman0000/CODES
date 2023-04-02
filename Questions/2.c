// WAP that reads a string and removes all the vowels from it

#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of String : ");
    scanf("%d", &n);
    char str[n] ;
    printf("Enter String : ");
    scanf("%s", &str);
    for(int i=0; i<n; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            str[i] = 0 ;
        }
    }
    printf("String : ");
    for(int i=0; i<n; i++){
        if(str[i]==0){
            continue ;
        }
        else{
            printf("%c", str[i]);
        }
    }
}