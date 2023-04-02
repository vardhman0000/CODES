#include<stdio.h>
int main(){
    int n;
    printf("Enter Length of Array ; ");
    scanf("%d", &n);

    int arr[n+1] ;
    
    for (int i = 1; i <= n; i++)
    {
        printf("Enter Elements : ");
        scanf("%d", &arr[i]);
    }
    printf("Array : ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    int arr2[n+1];
    for(int i=1; i<=n; i++){
        arr2[i] = 0 ;
    }
    int count ;
    for(int i=1; i<=n; i++){
        count = 0 ;
        for(int j=1; j<=n; j++){
            if(i!=j){
                if(arr[i]==arr[j]){
                    count ++ ;
                    //if(count==1){
                        arr2[i] = arr[i] ;
                    //}
                }
            }
        }
    }

    printf("\nDUPLICATE - ");
    int c = 0 ;
    for(int i=1; i<=n; i++){
        if(arr2[i]!=0){
            for(int j=1; j<=n; j++){
                if(i!=j){
                    if(arr2[i]==arr2[j]){
                        c ++ ;
                    }
                    if(c>1){
                        break ;
                    }
                    else{
                        printf("\n ELE - %d ", arr2[i]);
                    }
                }
            }
        }
    }
}