// WAP to check if the entered Alphabet is Vowel or Consonent

#include<stdio.h>
int main(){
    char alpha; 
    printf("Enter an Alphabet : ");
    scanf("%c",&alpha);

    if(alpha >= 'a' && alpha <= 'z'){
    
        if(alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u') {
            printf("It's a Vowel !!");
        }
        else {
            printf("It's a Consonent !!");   
        }
    }
    
    else if(alpha >= 'A' && alpha <= 'Z'){
        if(alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U'){
            printf("It's a Vowel !!");
        }
        else {
            printf("It's a Consonent !!");   
        }
    }

    else{
        printf("Not an Alphabet !!");
    }
}