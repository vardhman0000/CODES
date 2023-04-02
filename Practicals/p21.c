// // Write a program for matrix multiplication using the concept of 2D array

// #include<stdio.h>
// int main(){
//     printf("Name - Vardhman Jain\n");
//     printf("Roll No. - 2210992513\n\n");
//     int n, m ;
//     printf("Enter Number of Rows : ");
//     scanf("%d", &m);
//     printf("Enter Number of Columns : ");
//     scanf("%d", &n);
//     int arr1[m][n] ;    
//     int arr2[m][n] ;
//     int arr3[m][n] ;
//     printf("Enter Elements of 1st Matrix : ");
//     for(int i=0; i<m ;i++){
//         for(int j=0; j<n; j++){
//             scanf("%d", &arr1[i][j]);
//         }
//     }
//     printf("Enter Elements of 2nd Matrix : ");
//     for(int i=0; i<m ;i++){
//         for(int j=0; j<n; j++){
//             scanf("%d", &arr2[i][j]);
//         }
//     }
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             arr3[i][j] = arr1[i][j]*arr2[i][j] ;
//         }
//     }
//     printf("Matrix after Multiplication : \n");
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d ", arr3[i][j]);
//         }
//         printf("\n");
//     }
// }

//////////////////////////////////////////////////////////////////////////
#include <stdio.h>

int main() {
    printf("Name - Vardhman Jain\n");
    printf("Roll No. - 2201992513\n\n");
    int n ;
    printf("Enter Size of Matrix : ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];
    int i, j, k;

    // get input for matrix a
    printf("Enter elements of 1st Matrix : ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // get input for matrix b
    printf("Enter elements of 2nd Matrix : ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // multiply matrices a and b and store result in matrix c
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            c[i][j] = 0;
            for (k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // display matrix c
    printf("Resultant matrix c:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}