#include<stdio.h>
int main(){
    int n = 6 ;
    int arr[n] ;
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }
    int arr2[n+1] ;
    
    for(int i=1; i<=n; i++){
        arr2[i] = 0 ;
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
    int count=0, duplicate ;
    printf("Duplicate Array : ");
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i!=j){
                duplicate = arr2[j] ;
                if(arr2[i] == duplicate){
                    count = 1  ;
                    break ;
                }
            }
        }
        if(count==0){
            printf("%d", arr2[i]);
        }
        count = 0 ;
    }
}