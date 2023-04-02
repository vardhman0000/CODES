// WAP that reads two strings and concatenates them without using any standard library functions
#include<stdio.h>
int main(){
    int n,m ;
    
    printf("Enter Length of String 1 : ");
    scanf("%d", &m);
    char str1[m] ;
    printf("Enter String 1 : ");
    scanf("%s", &str1) ;

    printf("Enter Length of String 2 : ");
    scanf("%d", &n);
    char str2[n] ;
    printf("Enter String 2 : ");
    scanf("%s", &str2) ;

    char str3[m+n] ;
    for(int i=0; i<m+n; i++){
        str3[i] = 'a' ;
    }
    // for(int i=0; i<m+n; i++){
    //     if(i<m){
    //         for(int j=0; j<m; j++){
    //             str3[i] = str1[j] ;
    //             //printf("%c ", str1[j]) ;
    //         }
    //     }
    //     else if (i>m){
    //         for(int k=0; k<n; k++){
    //             str3[i] = str2[k] ;
    //             //printf("%c ", str2[k]);
    //         }
    //     }
    // }
    for(int i=0; i<m; i++){
        str3[i] = str1[i] ;
    }
    int x=0;
    for(int i=m; i<m+n; i++){
        for(int j=x; j<n; j++){
            printf("I - %d", i);
            printf("J - %d", j);
            str3[i] = str2[j] ;
            x++ ;
            break ;
        }
    }
    printf("\nConcatenated String : ");
    for(int i=0; i<m+n; i++){
        printf("%c ", str3[i]);
    }
    
    // jugad 
    // for(int j=0; j<m; j++){
    //     printf("%c", str1[j]) ;
    // }
    // for(int j=0; j<n; j++){
    //     printf("%c", str2[j]) ;
    // }
    
}