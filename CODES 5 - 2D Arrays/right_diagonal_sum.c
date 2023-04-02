//WAP to find the sum of right diagonals of matrix

#include<stdio.h>
int main(){
    int m,n ;
    printf("Enter no. of Rows : ");
    scanf("%d", &m);
    printf("Enter no. of Columns : ");
    scanf("%d", &n);
    int arr[m][n] ;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("\nEnter Element at %d %d : ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    int sum=0 ;
    for(int i=0; i<m; i++){
        int x=(n-1)-i ;
        for(int j=x; j<n; j++){
            sum = sum + arr[i][j] ; 
            break ; 
        }
    }
    printf("Sum is %d", sum);
}