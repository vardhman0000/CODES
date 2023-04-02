//WAP to Transpose of an Array
#include<stdio.h>
int main(){
    int arr1[3][3] ;
    int arr2[3][3] ;
    printf("Enter Elements (In Single Line): ");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i=0; i<3; i++){                  // Using 2 Arrays
        for(int j=0; j<3; j++){
            arr2[j][i] = arr1[i][j] ;
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d", arr2[i][j]);
        }
        printf("\n");
    }

    // for(int i=0; i<3; i++){             // Using only 1 Array
    //     for(int j=0; j<3; j++){
    //         printf("%d", arr1[j][i]);
    //     }
    //     printf("\n");
    // }
}