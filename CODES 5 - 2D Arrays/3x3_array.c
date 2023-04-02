//WAP in C for a 2D array of size 3x3 and print the matrix

#include<stdio.h>
int main(){
    int arr[3][3] ;
    char space ;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Enter Element at %d %d : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");     //----> By using \n
        // scanf( " %c", &space);     //----> Without using \n
    }
}