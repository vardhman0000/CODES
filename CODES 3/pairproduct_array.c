// WAP for pair product in array

#include<stdio.h>
int main(){
    int n ;
    printf("Enter Limit : ");
    scanf("%d", &n);
    int arr[n+1] ;

    if(n%2==0){ // for even no. of elements
        for(int i=1; i<=n; i++){
            printf("Enter Element : ");
            scanf("%d", &arr[i]);
        }

        for(int i=1; i<=n; i=i+2){
            printf("%d  ", arr[i]*arr[i+1]) ;
        }
    }
    else if(n%2 != 0){
        for(int i=1; i<=n; i++){
            printf("Enter Element : ");
            scanf("%d", &arr[i]);
        }
        arr[n+1] = 1 ;

        for(int i=1; i<=n; i=i+2){
            printf("%d  ", arr[i]*arr[i+1]) ;
        }
        printf("\nYou entered odd no. of elements!!");
        printf("\nAutomatically Adding 1 as last element of array !!");
    }
}