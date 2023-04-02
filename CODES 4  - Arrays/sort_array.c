#include<stdio.h>
int main(){
    int n;
    printf("Enter Length of Array : ");
    scanf("%d", &n);
    int arr[n+1] ;
    for(int i=1; i<=n; i++){
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }
    printf("ARRAY : ");
    for(int i=1; i<=n; i++){
        printf("%d ", arr[i]);
    }
    int count=n ;
    while(count>0){
        for (int i = 1; i <= n; i++)
        {
            if(arr[i]>arr[i+1]){
                int a = arr[i] ;
                arr[i] = arr[i+1] ;
                arr[i+1] = a ;
            }
        }
        count-- ;
    }
    printf("\nSORTED ARRAY : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    
}