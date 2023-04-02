#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int i, spaces, star, n ;
    printf("Enter a Limit : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(spaces = n-i; spaces>0; spaces--){ // for spaces
            printf(" ");
        }
        for(star = 1; star<=i; star++){ // for stars
            printf("*");
        }
        printf("\n");
    }
}