// WAP that takes an array of integers and sorts them in descending order using bubble sort.

#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    int arr[n+1] ;
    printf("Enter Elements : ");
    for(int i =1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    int temp = 0 ;
    int count = n-1 ;
    while(count>0){
        for(int i=1; i<n; i++){
            temp = 0 ;
            if(arr[i]>arr[i+1]){
                temp = arr[i] ;
                arr[i] = arr[i+1] ;
                arr[i+1] = temp ;
            }
        }
        count-- ;
    }
    printf("\nSorted Array (Decreasing Order): ");
    for(int i=n; i>0; i--){
        printf("%d ", arr[i]);
    }
}