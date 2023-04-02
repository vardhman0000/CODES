// WAP that reads a string and checks if it is a palindrome or not
#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of String : ");
    scanf("%d", &n) ;
    char str[n] ;
    printf("Enter String : ");
    scanf("%s", &str);
    int p=1 ;
    if(n%2!=0){
        // odd chars
        for(int i=0; i<=n/2; i++){
            if(str[i]==str[n-1-i]){
                continue ;
            }
            else{
                p=0 ;
            }
            break ;
        }
    }
    else{
        // even chars
        int y = n-1 ;
        for(int i=0; i<n/2; i++){
            for(int j=y; j>=n/2; j--){
                printf("I,J - %d, %d\n", i,j);
                if(str[i]==str[j]){
                    p=1 ;
                }
                else{
                    p=0 ;
                }
                y-- ;
                break ;
            }
        }
    }
    if(p==0){
            printf("Not Palindrome !!");
        }
        else{
            printf("Palindrome !!");
        }
}   
///////////////////////////////////////////////////////////////////////////////////////////
    // odd chars
    // int x = (n/2)*2 ;
    // for(int i=0 ; i<=(n/2) ; i++){
    //     for(int j = x ; j>=n/2 ; j--){
    //         printf("I,J - %d, %d\n", i,j);
    //         if(str[i]==str[j]){
    //             printf("I - %c, J - %c \n", str[i], str[j]);
    //         }
    //         else{
    //             p = 0 ;
    //         }
    //         x-- ;
    //         break ;
    //     }
    // }