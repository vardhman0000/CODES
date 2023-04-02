#include<stdio.h>
int main(){
    int m,n ;
    printf("Enter Rows and Columns : ");
    scanf("%d %d", &m, &n);
    int arr1[m][n], arr2[m][n], arr3[m][n];
    
    printf("Elements of 1st Matrix : ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Elements of 2nd Matrix : ");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            arr3[i][j] = 0 ;
            for(int k=0; k<n; k++){
                arr3[i][j] += arr1[i][k]*arr2[k][j] ;
            }
        }
    }
    printf("\nResultant Array : \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
}