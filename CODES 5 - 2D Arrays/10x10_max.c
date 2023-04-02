//WAP 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define rows 10
#define cols 10

int main(){
    int matrix[rows][cols] ;
    srand(time(NULL)) ;

    // Generate Random Matrix
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j] = rand() % 100 + 1 ;
            printf("%3d ", matrix[i][j]) ;
        }
        printf("\n");
    }
}