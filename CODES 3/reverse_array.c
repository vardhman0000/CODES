//WAP to revrse elements of an array

#include<stdio.h>
int main(){
    int n ;
    printf("Enter no. of elements : ");
    scanf("%d", &n);

    int arr[n] ;

    for(int i=1; i<=n; i++){
        printf("Enter Elements : ");
        scanf("%d", &arr[i]);
    }

    for(int i=n; i>0; i--){
        printf("%d  ", arr[i]);
    }
}