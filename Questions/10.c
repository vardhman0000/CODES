// Write a program that takes an array of integers and finds the second largest number in it

#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    int arr[n+1] ;
    printf("Enter Elements : ");
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    int count = n-1 ;
    int temp = 0 ;
    while(count>0){
        for(int i=1; i<n; i++){
            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1] ;
                arr[i+1] = temp ;
            }
        }
        count-- ;
    }
    printf("\nSorted Array : ");
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nSecond Largest No. is %d", arr[n-1]);
}