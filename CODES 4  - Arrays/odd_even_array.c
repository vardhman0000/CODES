#include<stdio.h>
int main(){
    int n, odd_count = 0, even_count = 0 ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);

    int arr[n] ;
    int odd_arr[n] ;
    int even_arr[n] ;
    
    for(int i=0; i<n; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    printf("\nArray : ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even_count++ ;
            even_arr[even_count] = arr[i] ;
        }
        else{
            odd_count ++ ;
            odd_arr[odd_count] = arr[i] ;
        }
    }
    printf("\n\nEven Array : ");
    for(int i=1; i<=even_count; i++){
        printf("%d ", even_arr[i]);
    }
    printf("\nOdd Array : ");
    for(int i=1; i<=odd_count; i++){
        printf("%d ", odd_arr[i]);
    }
}