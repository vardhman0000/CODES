#include<stdio.h>
int main(){
    int n ;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    int arr[n+1] ;
    arr[0] = 0 ;
    for(int i=1; i<=n; i++){
        printf("\nEnter Element : ");
        scanf("%d", &arr[i]);
    }
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    int ele ;
    printf("\nEnter Element to be Inserted : ");
    scanf("%d", &ele);
    int index ;
    for(int i=1; i<=n+1; i++){
        if(arr[i]>ele){
            index = i ;
            break ;
        }
    }
    printf("\nINDEX = %d", index);
    int arr2[n+1];
    arr2[0] = 0 ;
    for(int i=1; i<=n+1; i++){
        if(i<index){
            arr2[i] = arr[i] ;
        }
        else if(i==index){
            arr2[index] = ele ;
        }
        else{
            arr2[index+1] = arr[i-1] ;
            index ++ ;
        }
    }
    printf("\nArray - ");
    for(int i = 1; i<=n+1; i++){
        printf("%d ", arr2[i]);
    }
}