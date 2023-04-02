// Write a program to transpose a given matrix.

#include<stdio.h>
int main(){
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2210992513\n\n");
    int m,n ;
    printf("Enter Number of Rows : ");
    scanf("%d", &m);
    printf("Enter Number of Columns : ");
    scanf("%d", &n);
    int arr1[m][n] ;
    int arr2[m][n] ;
    printf("Enter Elements : ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr2[j][i] = arr1[i][j] ;
        }
    }
    printf("Transpose Matrix : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}