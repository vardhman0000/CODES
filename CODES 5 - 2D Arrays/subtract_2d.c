#include<stdio.h>
int main(){
    int a[3][3];
    int b[3][3];
    int sub[3][3];
    printf("\n----- INPUT OF ARRAY 1 -----");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("\nEnter Element at %d %d : ", i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n----- INPUT OF ARRAY 2 -----");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("\nEnter Element at %d %d : ", i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sub[i][j] = a[i][j] - b[i][j] ;
        }
    }

    printf("\n----- SUB ARRAY -----");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("\nElement at %d %d : ", i,j);
            printf("%d", sub[i][j]);
        }
    }
}