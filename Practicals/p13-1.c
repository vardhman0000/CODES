#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int n ;
    printf("Enter a Limit : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}