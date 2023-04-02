// WAP that reads a string and counts the number of words in it
#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    char str[n] ;
    printf("Enter String : ");
    scanf("%s", &str);
    int count=0 ;
    for(int i=0; i<n; i++){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            count++ ;
        }
    }
    printf("No. of Words in \"%s\" are %d", str, count);
}