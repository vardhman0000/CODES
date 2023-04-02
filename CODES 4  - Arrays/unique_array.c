#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of Array ; ");
    scanf("%d", &n);
    int arr[n+1] ;
    for(int i=1; i<=n; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    printf("Array ; ");
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]) ;
    }
    int arr2[n+1] ;
    for(int i=0; i<=n; i++){
        arr2[i] = 0;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    arr2[i] = arr[i] ;
                }
            }
        }
    }
    printf("\nUNIQUE - ");
    for(int i=1; i<=n; i++){
        if(arr2[i] != 0){
            printf("%d ", arr2[i]);
        }
    }
    int arr3[n] ;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){     // 1 2 2 1
            if(i!=j){
                if(arr2[i] != arr2[j]){
                    arr3[i] = arr2[i] ;
                }
                else{
                    arr[i] = 0 ;
                }
            }
        }
    }
    printf("\nARR3 - ");
    for(int i=1; i<=n; i++){
        printf("%d ", arr3[i]) ;
    }
}