#include<stdio.h>
int main(){
    int n ;
    printf("Enter Lenght of Array : ");
    scanf("%d", &n);

    int arr[n+1] ;

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nUnique Elements : ");

    for (int i = 1; i <= n; i++)
    {
        if(arr[i]!= arr[i+1]){
            printf("%d ", arr[i]);
        }
    }
}