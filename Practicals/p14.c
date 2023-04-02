#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int n=6 ;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            printf("%d ", j*i);
        }
        printf("\n");
    }
}